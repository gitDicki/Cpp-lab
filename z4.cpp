#include <iostream>

int findFirst(int arr[], int size, int x) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    
    int x;
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
    }

    else {

        int arr[size];
        bool flag = true;

        std::cout << "Введите элементы массива" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << "Введите число: ";
            std::cin >> arr[i];

            if (std::cin.fail()) {
                std::cout << "Неправильные входные данные.";
                flag = false;
                break;
            }
        }

        if (flag) {
            std::cout << "Введите число x: ";
            std::cin >> x;
            std::cout << findFirst(arr, size, x);
        }
    }
}
