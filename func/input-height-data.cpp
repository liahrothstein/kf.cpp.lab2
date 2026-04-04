#include <iostream>

using namespace std;

double inputHeightData(double &h) {
    while (true) {
        cout << "Введите глубину H (положительное число): ";
        
        if (cin >> h && h >= 0) {
            return h; 
        } else {
            cout << "Ошибка! Введено некорректное значение. Попробуйте еще раз." << std::endl;
        }
    }
}