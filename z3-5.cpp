#include <iostream>

int numLen (long x) {

    int i = 0;

    if (x < 0) {
        x = -x; 
    }

    if (x == 0){
        
        return 1;
    }
    else{
        while (x > 0) {
            x = x / 10;
            i++; 
        }
    }
    
    return i;
}

int main() {
    
    long x;

    std::cout << "Введите число x: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
  }
    else {
        std::cout << "Количество разрядов: " << numLen(x) << std::endl;
    }
}