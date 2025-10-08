#include <iostream>

bool isInRange (int a, int b, int num) {
    
    if (a > b) {
        if (b <= num && a >= num) {
            return true;
        }
        return false;
    }

    else if (a <= b) {
        if (a <= num && b >= num) {
            return true;
        }
        return false;
    }
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
    int num;

    bool flag = true;
    bool fail = true;

    while (flag) {
        std::cout << "Введите левую границу: ";
        std::cin >> a;

        fail = correct(std::cin.fail());
        if (!fail) {
            break;
        }

        std::cout << "Введите правую границу: ";
        std::cin >> b;

        fail = correct(std::cin.fail());
        if (!fail) {
            break;
        }

        std::cout << "Введите целое число: ";
        std::cin >> num;

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
        if (isInRange (a, b, num) == 1){
            std::cout << "Число входит в указанный диапазон";
        }

        else {
             std::cout << "Число не входит в указанный диапазон";
        }
    }
}