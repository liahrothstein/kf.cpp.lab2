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