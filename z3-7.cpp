#include <iostream>

void square (int x) {

    int chetStolb = x;

    while (chetStolb != 0) {

        int chetStroka = x;

        while (chetStroka != 0) {
            std::cout << '*';
            chetStroka -= 1;
        }
        std::cout << std::endl;
        chetStolb -= 1;
    }
}

int main() {
    
    int x;

    std::cout << "Введите размер квадрата: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные." << std::endl;
  }
    else {
        if (x > 0){
            square(x);
        }
        else {
            std::cout << "Квадрат не может быть нарисован" << std::endl;
        }
    }
}