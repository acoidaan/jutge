/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P42042_classification_of_characters.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads a letter and prints if it is lowercase,
  * uppercase, vowel or consonant.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P42042_en
  */
#include <iostream>
  int main() {
  char character{};
  std::cin >> character;
  
  if(character >= 'A' && character <= 'Z') {
    std::cout << "uppercase" << std::endl;
  } else {
    std::cout << "lowercase" << std::endl;
    }
  
  if(character == 'a' || character == 'e' || character == 'i' || character ==
'o' || character == 'u' || character == 'A' || character == 'E' || character
== 'I' || character == 'O' || character == 'U') {
  std::cout << "vowel" << std::endl;
  } else {
      std::cout << "consonant" << std::endl;
    }

  return 0;
}
