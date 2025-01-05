// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <cctype>
#include <string>

/// @brief Modifica una cadena poniendo las letras mayúsculas en minúsculas y viceversa
/// @param text 
/// @return count
void SwitchCase(std::string& text) {
  for (int i = 0; i < text.length(); i++) {
    if (islower(text[i])) {
      text[i] = toupper(text[i]);
    }
    else {
       text[i] = tolower(text[i]);
    }
  }
}

int main(int argc, char* argv[]) {
  std::string texto_introducido = argv[1];
  SwitchCase(texto_introducido);
  std::cout << texto_introducido;
  return 0;
}