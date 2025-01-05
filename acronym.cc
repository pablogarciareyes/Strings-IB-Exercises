// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN (ESTE LO HIZO CHAT GPT, CRÉDITOS A ÉL AHHAHAHAAH)

#include <iostream>
#include <cctype>
#include <string>

/// @brief Genera un acrónimo a partir de las letras mayúsculas de una cadena.
/// @param text Cadena de entrada.
/// @return Acrónimo generado.
std::string Acronym(const std::string& text) {
    std::string acronym;
    for (char c : text) {
        if (std::isupper(c)) {
            acronym += c;
        }
    }
    return acronym;
}

int main(int argc, char* argv[]) {
    // Concatenar todos los argumentos en una sola cadena para formar el texto completo.
    std::string input_text;
    for (int i = 1; i < argc; ++i) {
        input_text += argv[i];
        if (i < argc - 1) {
            input_text += " ";
        }
    }
    std::string acronym = Acronym(input_text);
    if (acronym.empty()) {
        std::cout << "No se encontraron letras mayúsculas en la cadena proporcionada.\n";
    } else {
        std::cout << acronym << std::endl;
    }
    return 0;
}
