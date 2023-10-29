/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P13623.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that prints the total number of coins in the white
  * squares
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P13623_en
  */
#include <iostream>
int main() {
  int rows, columns;
  std::cin >> rows >> columns;
  char num{0};
  int sum{0};
  for (int i{0}; i < rows; i++) {
    for (int j{0}; j < columns; j++) {
      std::cin >> num;
      if (i % 2 == j % 2) {
        sum += static_cast<int> (num - '0');
      }
    }
  }
  std::cout << sum << std::endl;
  return 0;
}
