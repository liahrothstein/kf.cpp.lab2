#include <iostream>

using namespace std;

// Параметр a передается по ссылке (&), чтобы функция могла записать в него введенное значение
void inputCubeData(double &a) {
    cout << "\nВведите длину ребра куба A (в сантиметрах): ";
    while (!(cin >> a) || a <= 0) {
        cout << "Ошибка! Ребро куба должно быть больше нуля. Попробуйте снова: ";
        cin.clear();
        while (cin.get() != '\n');
    }
}