#include <iostream>

void rightTriangle (int x) {

    int countStolb = x;
    
    int countStr1 = 1;
    int countStr2 = x;
    int bufer = countStr1;

    while (countStolb != 0) {

        int countStr2 = x - countStr1;

        while (countStr2 != 0) {
            std::cout << ' ';
            countStr2 -= 1;
        }

        bufer = countStr1;

        while (bufer != 0) {
             std::cout << '*';
             bufer -= 1;
        }

        countStr1 += 1;
        std::cout << std::endl;
        countStolb -= 1;
    }
}

int main() {
    
    int x;

    std::cout << "Введите размер треугольника: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные." << std::endl;
    }
    else {
        if (x > 0){
            rightTriangle (x);
        }
        else {
            std::cout << "Треугольник не может быть нарисован" << std::endl;
        }
    }
}