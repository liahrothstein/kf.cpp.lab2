#include <iostream>
#include <cmath>

#include "./func/print-info.h"
#include "./func/input-cube-data.h"
#include "./func/calc-cube.h"
#include "./func/out-res.h"

using namespace std;

int main() {
    double A;
    double V, S_total, S_face;

    printInfo("объем для куба с ребром А, площадь поверхности и площадь одной грани");
    inputCubeData(A);
    calculateCube(A, V, S_total, S_face);
    outputResults(A, V, S_total, S_face);

    return 0;
}