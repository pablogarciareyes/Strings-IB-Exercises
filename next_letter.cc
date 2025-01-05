// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <cctype>
#include <string>

/// @brief Sustituye las letras de una cadena por la siguiente en el alfabeto
/// @param text 
/// @return count
void NextLetter(std::string& text) {
  for (int i = 0; i < text.length(); i++) {
    text[i] += 1;
  }
}

int main(int argc, char* argv[]) {
  std::string texto_introducido = argv[1];
  NextLetter(texto_introducido);
  std::cout << texto_introducido;
  return 0;
}