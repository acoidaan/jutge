/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P29973.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date  2023
  * @brief This is a program that prints a triangle of size n
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29973_en
  */

#include <iostream>
int main() {
  int number;
  std::cin >> number;
  for (int i = 1; i <= number; ++i) {
    for (int j = 0; j < i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}

