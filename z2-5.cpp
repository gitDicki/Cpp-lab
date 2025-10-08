#include <iostream>

int max3 (int x, int y, int z) {

    if (x >= y) {
        if (x >= z){
            return x;
        }

        else {
            return z;
        }
    }
    
    else if (y >= x) {
        if (y >= z) {
            return y;
        }

        else {
            return z;
        }
    }
}

bool correct (bool fail) {
    if (fail) {
        return false;
    }

    return true;
}

int main() {

    int x;
    int y;
    int z;


    bool flag = true;
    bool fail = true;

    while (flag) {
        std::cout << "Введите число  x: ";
        std::cin >> x;

        fail = correct(std::cin.fail());
        if (!fail) {
            break;
        }

        std::cout << "Введите число  y: ";
        std::cin >> y;

        fail = correct(std::cin.fail());
        if (!fail) {
            break;
        }

        std::cout << "Введите число  z: ";
        std::cin >> z;

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
        std::cout << "Максимальное число: " << max3(x, y, z);
    }

}