/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P69277.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads one number and print the result of the
  * first cubes
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P69277_en
  */
#include <iostream>
int main() {
  int numero{};
  int suma{};
  std::cin >> numero;

  for( int i = 0; i <= numero; ++i) {
  std::cout << i * i * i;
    if( i < numero) {
    std::cout << ",";
    }
  }
  std::cout << std::endl;
  return 0;
}
