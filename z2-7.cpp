#include <iostream>

int sum2 (int x, int y) {

    int sum = x + y;

    if (sum >= 10 && sum <= 19){
        return 20;
    }
    return sum;
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

        flag = false;
    }
    
    if (!fail) {
        std::cout << "Неправильные входные данные.";
    }
     else {
        std::cout << "Сумма чисел: " << sum2(x, y);
    }

}