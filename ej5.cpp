#include <iostream>
#include <fstream>
using namespace std;
int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);

    // Escribir en el archivo
    std::ofstream writeFile("example.txt");
    if (writeFile.is_open()) {
        writeFile << text;
        std::cout << "El texto se guardó correctamente.\n";
        writeFile.close(); // Cerrar el archivo después de escribir
    } else {
        std::cerr << "No se pudo abrir el archivo para escribir.\n";
        return 1; // Salir del programa con un código de error
    }

    // Leer desde el archivo
    std::ifstream readFile("example.txt");
    if (readFile.is_open()) {
        std::string content;
        while (std::getline(readFile, content)) {
            std::cout << "Contenido del archivo: " << content << "\n";
        }
        readFile.close(); // Cerrar el archivo después de leer
    } else {
        std::cerr << "No se pudo abrir el archivo para leer.\n";
        return 1; // Salir del programa con un código de error
    }

    return 0;
}