#include <iostream>

bool is35 (int x) {

    if (x % 5 == 0 && x % 3 == 0) {
        return false;
    }
    else if (x % 5 != 0 && x % 3 == 0) {
        return true;
    }
    else if (x % 5 == 0 && x % 3 != 0) {
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
        if (is35(x)) {
            std::cout << "Число делиться либо на 5 либо на 3";
        }
        else {
            std::cout << "Число либо не делиться на 5 и на 3, либо делиться сразу на оба числа";
        }
    }

}