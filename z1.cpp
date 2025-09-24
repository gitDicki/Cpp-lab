#include <iostream>

double fraction(double x) {
    
        int xint = (int)x;
        x = x - xint;
        return x;
}

int main() {

    double x;

    std::cout << "Введите вещественное число x: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
    }
    else {
        std::cout << "Число без целой части: " << fraction(x);
    }
}
