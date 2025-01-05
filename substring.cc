// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <cctype>
#include <string>

/// @brief Sustituye las letras de una cadena por la siguiente en el alfabeto
/// @param text 
/// @return count
std::string substr(const std::string& str, size_t pos, size_t len) {
  if (pos > str.size()) {
    return "";
  }
  return str.substr(pos, len);
}

int main(int argc, char* argv[]) {
  std::string str_user = argv[1];
  size_t position = atoi(argv[2]);
  size_t lenght = atoi(argv[3]);
  std::cout << substr(str_user, position, lenght);
  return 0;
}