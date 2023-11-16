#include <sstream>
#include <string>
#include <iostream>
int main() {
    int num; // Declarar la variable num antes de usarla en std::cin
    std::cout << "Ingresa un número: ";
    std::cin >> num;

    // Crear un objeto ostringstream con un nombre diferente
    std::ostringstream numStream;
    numStream << num; // Utilizar el objeto ostringstream para convertir el número a string
    std::string res = numStream.str(); // Obtener la cadena resultante

    std::cout << "El número ingresado es: " << res << std::endl; // Mostrar la cadena resultante

    std::cin.ignore(); // Ignorar el carácter de nueva línea dejado por la entrada anterior
    std::cout << "Presiona Enter para salir...";
    std::cin.get(); // Esperar a que el usuario presione Enter antes de salir

    return 0;
}