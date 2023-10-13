/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P36668_sum_of_squares.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads one number and print the result of the
  * first squares
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P36668_en
  */
#include <iostream>
int main() {
  int numero{};
  int suma{};
  std::cin >> numero;
  for( int i = 1; i <= numero; i++) {
  suma += i * i;
  }
  std::cout << suma << std::endl;

  return 0;
}
