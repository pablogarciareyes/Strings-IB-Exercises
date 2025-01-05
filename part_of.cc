// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <cctype>
#include <string>

/// @brief Encuentra el carácter introducido por el usuario en una cadena y devuelve el índice
/// @param text 
/// @return count
void PartOf(std::string& text, std::string sub_text) {
  if (text.rfind(sub_text) == std::string::npos) {
    std::cout << "No";
  }
  else {
    std::cout << "Yes";
  }
}

int main(int argc, char* argv[]) {
  std::string texto_introducido = argv[1];
  std::string sub_texto = argv[2];
  PartOf(texto_introducido, sub_texto);
  return 0;
}