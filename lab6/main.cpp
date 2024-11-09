#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    int count;
    std::cout << "Введите количество натуральных чисел (не более 10000): ";
    std::cin >> count;

    if (count > 10000)
    {
        std::cout << "Ошибка: количество не должно превышать 10000." << std::endl;
        return 0;
    }

    std::vector<int> numbers(count);
    std::cout << "Введите " << count << " натуральных чисел: ";
    for (int i = 0; i < count; ++i)
    {
        std::cin >> numbers[i];
    }

    bool foundSum19 = false;
    for (int num : numbers)
    {
        int digitSum = 0;
        int temp = num;
        while (temp > 0)
        {
            digitSum += temp % 10;
            temp /= 10;
        }
        if (digitSum == 19)
        {
            foundSum19 = true;
            break;
        }
    }

    if (!foundSum19)
    {
        std::sort(numbers.rbegin(), numbers.rend());
    }

    std::cout << "Результат: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    int rows, cols;
    std::cout << "Введите размеры матрицы (не более 100): ";
    std::cin >> rows >> cols;

    if (rows > 100 || cols > 100)
    {
        std::cout << "Ошибка: размеры матрицы не должны превышать 100." << std::endl;
        return 0;
    }

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    std::cout << "Введите элементы матрицы: ";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    int maxRowIndex = 0;
    int maxRowSum = 0;

    for (int i = 0; i < rows; ++i)
    {
        int currentRowSum = 0;
        for (int j = 0; j < cols; ++j)
        {
            currentRowSum += matrix[i][j];
        }
        if (std::abs(currentRowSum) > std::abs(maxRowSum))
        {
            maxRowSum = currentRowSum;
            maxRowIndex = i;
        }
    }

    for (int j = 0; j < cols; ++j)
    {
        matrix[maxRowIndex][j] = 9999;
    }

    std::cout << "Изменённая матрица: " << std::endl;
    for (const auto& row : matrix)
    {
        for (const auto& elem : row)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }


    std::cout << "Введите количество натуральных чисел для фильтрации (не более 10000): ";
    std::cin >> count;

    if (count > 10000)
    {
        std::cout << "Ошибка: количество не должно превышать 10000." << std::endl;
        return 0;
    }

    numbers.resize(count);
    std::cout << "Введите " << count << " натуральных чисел: ";
    for (int i = 0; i < count; ++i)
    {
        std::cin >> numbers[i];
    }

    std::vector<int> filteredNumbers;

    for (int num : numbers)
    {
        int firstDigit = num;
        while (firstDigit >= 10) firstDigit /= 10;

        int lastDigit = num % 10;

        bool isFirstDigitDifferent = (firstDigit != lastDigit);

        if (isFirstDigitDifferent)
        {
            if (std::find(filteredNumbers.begin(), filteredNumbers.end(), num) == filteredNumbers.end())
            {
                filteredNumbers.push_back(num);
            }

            if (firstDigit == 3)
            {
                filteredNumbers.push_back(num);
            }
        }
    }

    std::cout << "Результат фильтрации: ";
    for (const auto& num : filteredNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}