#include <iostream>

int main() {
    unsigned int x;
    int i;

    std::cout << "Введите значение числа: ";
    std::cin >> x;

    std::cout << "Введите номер бита: ";
    std::cin >> i;

    if (x > 0 && x < 1000000000 && i >= 0 && i < 32) { // проверка значенй
        x &= ~(1 << i); // установка i-го бита в 0
        std::cout << "Число после установки бита: " << x << std::endl;
    } else {
        std::cout << "Введены неправильные данные" << std::endl;
    }

    return 0;
}

