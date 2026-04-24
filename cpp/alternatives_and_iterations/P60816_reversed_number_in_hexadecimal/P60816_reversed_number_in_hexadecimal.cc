/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P60816_reversed_number_in_hexadecimal.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 10 2023
  * @brief This is a program that reads a number and prints it in it's
  * hexadecimal form.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P60816_en
  */
#include <iostream>
int main() {
  int number{};
  int resto{};
  std::cin >> number; 
  if(number == 0) {
    std::cout << "0" << std::endl;
  } else {
    std::string hexadecimal;
    while (number > 0) {
      resto = number % 16;
      if (resto < 10) {
        hexadecimal = char('0' + resto) + hexadecimal;
      } else {
          hexadecimal = char('A' + resto - 10) + hexadecimal;
        }
      number /= 16;
    }
  
  std::string reversed_hexadecimal;
  for(int i = hexadecimal.size() - 1; i >= 0; --i) {
    reversed_hexadecimal += hexadecimal[i];    
  }
  std::cout << reversed_hexadecimal << std::endl;
  }

  return 0;
}
