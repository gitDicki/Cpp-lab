#include <iostream>

bool is2Digits (int x) {
    
    if (x/10 < 10 && x/10 >= 1) {
        return true;
    }

    else {
        return false;
    }
}

int main() {

    int x;

    std::cout << "Введите число x: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
    }

    else {
        if (is2Digits(x) == 1){
            std::cout << "Число является двузначным";
        }

        else {
             std::cout << "Число не является двузначным";
        }
    }
}