#include <iostream>
#include <cmath>

#include "./func/print-info.h"

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

/*
'a' передается по значению (входной). 
'v', 's_total', 's_face' передаются по ссылке (выходные параметры)
*/
void calculateCube(double a, double &v, double &s_total, double &s_face) {
    s_face = pow(a, 2);           // Площадь одной грани: A^2
    s_total = 6 * s_face;         // Площадь полной поверхности: 6 * A^2
    v = pow(a, 3);                // Объем: A^3
}

void outputResults(double a, double v, double s_total, double s_face) {
    cout << "-------------------------------------------------------" << endl;
    cout << "Результаты расчета для куба с ребром " << a << " см:" << endl;
    cout << " 1. Площадь одной грани:      " << s_face << " кв. см" << endl;
    cout << " 2. Площадь всей поверхности: " << s_total << " кв. см" << endl;
    cout << " 3. Объем куба:               " << v << " куб. см" << endl;
    cout << "=======================================================" << endl;
}

int main() {
    double A;
    double V, S_total, S_face;

    printInfo("объем для куба с ребром А, площадь поверхности и площадь одной грани");
    inputCubeData(A);
    calculateCube(A, V, S_total, S_face);
    outputResults(A, V, S_total, S_face);

    return 0;
}