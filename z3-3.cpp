#include <iostream>
#include <string>

using namespace std;

string chet (int x) {

    if (x > 0) {
        int i = 1;
        string list = "0";
        while (i < x+1) {
            if (i % 2 == 0){
                list += ' ' + std::to_string(i);
            }
            i += 1;
        }

        return list;
    }

    return "0";
}

int main() {
    
    int x;

    std::cout << "Введите число x: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
  }
    else {
        std::cout << "Четные числа от 0 до x: "<< chet(x);
    }
}