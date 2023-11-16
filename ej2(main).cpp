// ej2(main).cpp
#include <iostream>
#include "ej2(triangulo).cpp"
#include "ej2(circulo).cpp"

int main() {
    std::cout << "Pulse una tecla para continuar..." << std::endl;
    std::cin.get();

    double baseTriangulo, alturaTriangulo;
    std::cout << "Ingrese la base del triangulo: ";
    std::cin >> baseTriangulo;
    std::cout << "Ingrese la altura del triangulo: ";
    std::cin >> alturaTriangulo;

    double areaTriangulo = Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
    std::cout << "El área del triangulo es: " << areaTriangulo << std::endl;

    std::cout << "Pulse una tecla para continuar..." << std::endl;
    std::cin.get();

    double radioCirculo;
    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> radioCirculo;

    double areaCirculo = Geometria::calcularAreaCirculo(radioCirculo);
    std::cout << "El area del circulo es: " << areaCirculo << std::endl;

    return 0;
}
