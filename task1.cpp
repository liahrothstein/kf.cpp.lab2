#include <iostream>

#include "./func/print-info.h"
#include "./func/calc-pres.h"

using namespace std;

int main() {
    double H;

    printInfo("силу давления в воде на глубине H метров");
    
    // Ввод исходных данных с указанием единиц измерения
    cout << "\nВведите глубину H (в метрах): ";
    if (!(cin >> H) || H < 0) {
        cout << "Ошибка: глубина должна быть положительным числом!" << endl;

        return 1;
    }

    // Вызов функции, выполняющей вычисления
    double P = calculatePressure(H);

    // Вывод результатов
    cout << "\nРезультат вычислений:" << endl;
    cout << "На глубине " << H << " метров давление составляет " << P << " Па." << endl;

    return 0;
}