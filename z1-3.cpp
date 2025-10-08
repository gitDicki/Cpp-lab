#include <iostream>

int charToNum (char x) {
    
    int xint = x - '0';
        
    return xint;
}

int main() {

    char x;

    std::cout << "Введите число x: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
    }
    else {
        std::cout << "Число x: " << charToNum(x);
    }
}