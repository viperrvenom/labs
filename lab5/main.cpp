#include <iostream>

int main() {
    std::cout << "Введите любые числа (Для остановки введите 0)" << std::endl;
    float i=0;
    float j=0;
    float min=0;
    float m=0;
    float mult=1.0;
    while(std::cin >> i)
    {
        if (i < 0 && i != round(i))
        {
            mult = mult * i;
            j = i < min ? m : j;
            min = min > i ? i : min;
        }
        if (i == 0)
        {
            std::cout << "Произведеине равно: " << mult << std::endl;
            std::cout << "Минимальное значение: " << min << std::endl;
            std::cout << "Номер минимального числа (начиная с 0): " << j << std::endl;
            break;
        }
        m++;
    }

    int N=0;
    std::cout << "Введите натуральное число от 0 до 10^9: ";
    std::cin >> N;

    if (N <= 0 || N >= 1000000000) {
        std::cout << "Ошибка: число должно быть натуральным и меньше 10^9." << std::endl;
        return 1;
    }

    int minDigit = 9;

    while (N > 0) {
        int digit = N % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        N /= 10;
    }

    std::cout << "Наименьшая цифра числа: " << minDigit << std::endl;

    return 0;
}
