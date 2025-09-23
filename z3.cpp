#include <iostream>
#include <string>

using namespace std;

std::string listNums(int x) {

    if (x > 0) {
        int i = 1;
        string list = "0";
        while (i < x+1) {
            list += ' ' + std::to_string(i);
            i += 1;
        }

        return list;
    }

    return "";
}

int main() {
    
    int x;

    std::cout << "Введите число x: ";
    std::cin >> x;
    std::cout << listNums(x);
}