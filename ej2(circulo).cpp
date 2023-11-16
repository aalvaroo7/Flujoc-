// ej2(circulo).cpp
#include <iostream>
#include <cmath>

namespace Geometria {
    const double PI = 3.14159265358979323846;

    double calcularAreaCirculo(double radio) {
        return PI * pow(radio, 2);
    }
}
