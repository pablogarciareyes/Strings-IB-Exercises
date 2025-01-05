// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <cctype>
#include <string>

/// @brief Modifica una cadena poniendo las letras mayúsculas en minúsculas y viceversa
/// @param text 
/// @return count
std::string Precedence(std::string first_str, std::string second_str) {
  int max_size = (first_str.size() > second_str.size()) ? first_str.size() : second_str.size();
  for (int i = 0; i < max_size; i++) { 
    char char_first = first_str[i]; 
    char char_second = second_str[i];
    if (char_first < char_second) {
      return first_str;
    } 
    else if (char_first > char_second) {
      return second_str;
    }
  }
  return "Son la misma cadena";
}

int main(int argc, char* argv[]) {
  std::string first_str = argv[1];
  std::string second_str = argv[2];
  std::cout << Precedence(first_str, second_str);
  return 0;
}