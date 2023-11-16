#include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    file.open("example.txt");

    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo.\n";
    } else {
        std::cout << "El archivo se abrió correctamente.\n";

        // Verificar el estado del archivo
        if (file.fail()) {
            std::cerr << "Error al leer el archivo.\n";
        } else {
            std::cout << "Operación de lectura del archivo exitosa.\n";
        }
    }

    file.close();
    return 0;
}