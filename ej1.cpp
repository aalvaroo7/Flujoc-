#include <iostream>
#include <sstream>
#include <string>
int main() {
    int num; // Declarar la variable num antes de usarla en std::cin
    std::cout << "Ingresa un número: ";
    std::cin >> num;

    // Crear un objeto ostringstream con un nombre diferente
    std::ostringstream numStream;
    numStream << num; // Utilizar el objeto ostringstream para convertir el número a string
    std::string res = numStream.str(); // Obtener la cadena resultante

    std::cout << "El número ingresado es: " << res << std::endl; // Mostrar la cadena resultante
    return 0;
}