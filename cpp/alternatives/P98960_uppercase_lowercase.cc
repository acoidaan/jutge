/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P98890_uppercase_lowercase.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads a letter. If it is a lowercase letter,
  * it prints the uppercase letter, otherwise, it prints the lowercase letter of
  * a capital letter.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P98960_en
  */
#include <iostream>
int main() {
  char character{};  
  std::cin >> character;
  
  if(character >= 'A' && character <= 'Z') { 
    character = character + 32;
    std::cout << character << std::endl;
  } else {
      character = character - 32;
      std::cout << character << std::endl;
    }

  return 0;
}
