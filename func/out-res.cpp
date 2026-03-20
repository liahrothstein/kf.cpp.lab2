#include <iostream>

using namespace std;

void outputResults(double a, double v, double s_total, double s_face) {
    cout << "\n=======================================================" << endl;
    cout << "Результаты расчета для куба с ребром " << a << " см:" << endl;
    cout << " 1. Площадь одной грани:      " << s_face << " кв. см" << endl;
    cout << " 2. Площадь всей поверхности: " << s_total << " кв. см" << endl;
    cout << " 3. Объем куба:               " << v << " куб. см" << endl;
    cout << "=======================================================" << endl;
}