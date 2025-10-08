#include <iostream>

int abs(int x) {

    if (x > 0) {
        return x;
    }
    
    else {
        return -1 * x;
    }
}

int maxAbs (int arr[], int size) {

    int max = arr[0];

    for (int i = 1; i < size; i++) {

        if (abs(arr[i]) > abs(arr[i-1])) {
            max = arr[i];
        }
    }

    return max;
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
            std::cout << "Наибольшее по модулю число: " << maxAbs(arr, size);
        }
    }
}