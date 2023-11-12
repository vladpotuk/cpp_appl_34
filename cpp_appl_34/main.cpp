#include <iostream>
#include<Windows.h>

// Функція для перевірки, чи є рядок паліндромом
bool isPalindrome(const char* str, int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        
        while (!isalpha(str[start]) && start < end) {
            start++;
        }

        
        while (!isalpha(str[end]) && start < end) {
            end--;
        }

        
        if (tolower(str[start]) != tolower(str[end])) {
            return false; 
        }

        start++;
        end--;
    }

    return true; 
}

int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "Введіть рядок на англійській мові: ";
    std::cin.getline(inputString, MAX_LENGTH);

    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    if (isPalindrome(inputString, length)) {
        std::cout << "Рядок є паліндромом." << std::endl;
    }
    else {
        std::cout << "Рядок не є паліндромом." << std::endl;
    }

    return 0;
}
