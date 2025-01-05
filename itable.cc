// FALTA COMENTARIO DE CABECERA, FUNCION USAGE Y COMENTARIOS DOXYGEN

#include <iostream>
#include <string>
#include <vector>

/// @brief Convierte un vector de enteros en los valores específicos para los índices de la tabla
/// @param num_vector 
/// @return final_str
std::string TableConverter(std::vector<int> num_vector) {
  std::string final_str;
  for (int i = 0; i < num_vector.size(); i++) {
    if (num_vector[i] <= 9) {
      final_str += static_cast<char>('0' + num_vector[i]);
    }
    else if (num_vector[i] > 9 && num_vector[i] <= 35) {
      final_str += static_cast<char>('A' + num_vector[i] - 10);
    }
    else {
      std::cout << "Not valid number\n";
    }
  }
  return final_str;
}

int main(int argc, char* argv[]) {
  std::vector<int> test_vec = {1, 3, 12, 34};
  std::cout << TableConverter(test_vec);
}