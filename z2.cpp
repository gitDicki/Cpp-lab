#include <iostream>

int abs(int x) {

    if (x > 0) {
        return x;

    }
    else {
        return -1*x;
    }
}

int main() {
    
    double x;

    std::cout << "Введите число x: ";
    std::cin >> x;
    std::cout << "Модуль числа x: " << abs(x);
}