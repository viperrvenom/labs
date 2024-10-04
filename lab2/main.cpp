#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Введите сторону A: ";
    cin >> A;
    cout << "Введите сторону B: ";
    cin >> B;
    cout << "Введите сторону C: ";
    cin >> C;

    if (A > 0 && B > 0 && C > 0 && A < 10000 && B < 10000 && C < 10000) {
        int V = A * B * C;
        cout << "Объем параллелепипеда: " << V << endl;
    } else {
        cout << "Значения сторон должны быть в диапазоне от 1 до 9999." << endl;
    }

    return 0;
}
