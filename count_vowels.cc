// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <cctype>
#include <string>

/// @brief Cuenta las vocales en una string
/// @param text 
/// @return count
int CountVowels(const std::string& text) {
  int count;
  for (char c : text) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      count++;
    }
  }
  return count;
}

int main(int argc, char* argv[]) {
  std::cout << CountVowels(argv[1]);
  return 0;
}