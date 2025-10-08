#include <iostream>

bool isEqual(int a, int b, int c) {
    
    if (a == b && a == c) {
        return true;
    }

    return false;
}

bool correct (bool fail) {
    if (fail) {
        return false;
    }

    return true;
}

int main() {

    int a;
    int b;
    int c;

    bool flag = true;
    bool fail = true;

    while (flag) {
        std::cout << "Введите целое число a: ";
        std::cin >> a;

        fail = correct(std::cin.fail());
        if (!fail) {
            break;
        }

        std::cout << "Введите целое число b: ";
        std::cin >> b;

        fail = correct(std::cin.fail());
        if (!fail) {
            break;
        }

        std::cout << "Введите целое число c: ";
        std::cin >> c;

        fail = correct(std::cin.fail());
        if (!fail) {
            break;
        }

        flag = false;
    }
    
    if (!fail) {
        std::cout << "Неправильные входные данные.";
    }
    else {
        if (isEqual (a, b, c) == 1){
            std::cout << "Числа равны";
        }

        else {
             std::cout << "Числа не равны";
        }
    }
}