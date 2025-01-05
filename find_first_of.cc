// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <cctype>
#include <string>

/// @brief Encuentra el carácter introducido por el usuario en una cadena y devuelve el índice
/// @param text 
/// @return count
int FindFirstOf(std::string& text, std::string character_to_find) {
  for (int i = 0; i < text.length(); i++) {
    if (text[i] == character_to_find[0]) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char* argv[]) {
  std::string texto_introducido = argv[1];
  std::string caracter_introducido = argv[2];
  std::cout << FindFirstOf(texto_introducido, caracter_introducido);
  return 0;
}