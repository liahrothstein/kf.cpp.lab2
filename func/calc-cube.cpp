#include <cmath>

/*
'a' передается по значению (входной). 
'v', 's_total', 's_face' передаются по ссылке (выходные параметры)
*/
void calculateCube(double a, double &v, double &s_total, double &s_face) {
    s_face = pow(a, 2);           // Площадь одной грани: A^2
    s_total = 6 * s_face;         // Площадь полной поверхности: 6 * A^2
    v = pow(a, 3);                // Объем: A^3
}