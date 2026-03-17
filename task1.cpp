#include <iostream>

using namespace std;

// Функция для вывода информации о программе и авторе
void printInfo() {
    cout << "Программа вычисляет силу давления в воде на глубине H метров" << endl;
    cout << "\nИсполнитель: Новиков Д. А." << endl;
    cout << "Вариант: №14" << endl;
}

/*
Функция вычисления давления
Принимает глубину h, возвращает давление
*/
double calculatePressure(double h) {
    const double rho = 1000.0; // Плотность воды (кг/м3)
    const double g = 9.81;     // Ускорение свободного падения (м/с2)
    
    double pressure = rho * g * h;

    return pressure;
}

int main() {
    double H;

    printInfo();
    
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