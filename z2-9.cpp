#include <iostream>
#include <string>

using namespace std;

string day (int x) {

    switch (x) {
        case 1:
            return "Понедельник";
           
        case 2:
            return "Вторник";
           
        case 3:
            return "Среда" ;

        case 4:
            return "Четверг" ;

        case 5:
            return "Пятница" ;

        case 6:
            return "Суббота" ;

        case 7:
            return "Воскресенье";
    }
}

int main() {
    
    int x;

    std::cout << "Введите номер дня недели: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Неверные входные данные";
        
  }
    else {
        if (x <= 7 && x >= 1) {
             std::cout << "День недели: " << day(x);
        }

        else {
             std::cout << "Это не день недели";
        }
       
    }
}