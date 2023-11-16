#include <iostream>
#include <sstream>

int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);

    std::stringstream ss(text); // Inicializar ss con el texto directamente

    std::string word;
    while (ss >> word) {
        std::cout << "Palabra desde el flujo de cadena: " << word << std::endl;
    }

    return 0;
}