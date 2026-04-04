#include <iostream>

#include "./func/print-info.h"
#include "./func/input-height-data.h"
#include "./func/calc-pres.h"

using namespace std;

int main() {
    double H;

    printInfo("силу давления в воде на глубине H метров");
    
    inputHeightData(H);

    // Вызов функции, выполняющей вычисления
    double P = calculatePressure(H);

    // Вывод результатов
    cout << "\nРезультат вычислений:" << endl;
    cout << "На глубине " << H << " метров давление составляет " << P << " Па." << endl;

    return 0;
}