// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <string>

std::string StringCombinator(std::string first_str, std::string second_str) {
  std::string dummy_str;
  int final_size;
  if (first_str.size() >= second_str.size()) {
    final_size = second_str.size();
  }
  else {
    final_size = first_str.size();
  }
  for (int i = 0; i < final_size; i++) {
    dummy_str += first_str[i]; 
    dummy_str += second_str[i];
  }
  return dummy_str;
}

int main(int argc, char* argv[]) {
  std::string user_first_str = argv[1];
  std::string user_second_str = argv[2];
  std::cout << StringCombinator(user_first_str, user_second_str);
}