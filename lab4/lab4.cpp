#include <iostream>

int main() {
    int A;
    int B;
    int C;
    std::cout << "Введите натуральные числа A, B и C: ";
    std::cin >> A >> B >> C;

    if (A < B && B < C) {
        std::cout << "C - B - A = " << C - B - A << std::endl;
    } else if (A % C == 0) {
        std::cout << "A / C + B = " << A / C + B << std::endl;
    } else {
        std::cout << "A + B + C = " << A + B + C << std::endl;
    }

    int N;
    std::cout << "Введите код товара (1-5): ";
    std::cin >> N;

    switch (N) {
    case 1:
        std::cout << "Товар №1: Яблоко" << std::endl;
        break;
    case 2:
        std::cout << "Товар №2: Банан" << std::endl;
        break;
    case 3:
        std::cout << "Товар №3: Морковь" << std::endl;
        break;
    case 4:
        std::cout << "Товар №4: Картошка" << std::endl;
        break;
    case 5:
        std::cout << "Товар №5: Хлеб" << std::endl;
        break;
    default:
        std::cout << "Неверный код товара" << std::endl;
        break;
    }

    int x;
    std::cout << "Введитеx (-1 либо 1): ";
    std::cin >> x;

    if (x == -1) {
        std::cout << "Negative number" << std::endl;
    } else if (x == 1) {
        std::cout << "Positive number" << std::endl;
    } else {
        std::cout << "Ошибка: Введено неверное число" << std::endl;
    }

    return 0;
}
