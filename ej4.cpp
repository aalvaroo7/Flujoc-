#include <iostream>
#include <iomanip> // Necesario para std::fixed y std::setprecision

// Declaración del espacio de nombres Ciencia
namespace Ciencia {

    // Declaración del subespacio de nombres Fisica
    namespace Fisica {

        // Declaración de la constante para la velocidad de la luz
        const double velocidad_luz = 299792458; // en metros por segundo

        // Declaración de la función para calcular la energía a partir de la masa
        double calcular_energia(double masa) {
            return masa * velocidad_luz * velocidad_luz;
        }
    }
}

// Función principal (main)
int main() {
    // Pedir al usuario que ingrese la masa del objeto
    double masa_objeto;
    std::cout << "Ingrese la masa del objeto en kilogramos: ";
    std::cin >> masa_objeto;

    // Calcular la energía utilizando la función del espacio de nombres Ciencia::Fisica
    double energia_objeto = Ciencia::Fisica::calcular_energia(masa_objeto);

    // Mostrar el resultado con dos decimales
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Energia del objeto con masa " << masa_objeto << " kg: " << energia_objeto << " Julios" << std::endl;

    return 0;
}
