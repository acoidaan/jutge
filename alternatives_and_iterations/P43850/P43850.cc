/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P43850.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 25 2023
  * @brief This is a program that tries to guess the number you were thinking
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P43850_en
  */
#include <iostream>
int main() {
  unsigned int number{0}, result{0};
  while (std::cin >> number) {
  result = (((((number/5)-9)/4)-6)/5);
 
  std::cout << result << std::endl;
  }
  return 0;
}

