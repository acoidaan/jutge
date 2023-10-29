/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P42280.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that prints the total amount of coins on the
  * boards
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P42280_en
  */
#include <iostream>
int main() {
  int columns, rows;
  while (std::cin >> rows >> columns) {
    int sum{};
    char num{};
    for (int i{0}; i < rows * columns; i++) {
      std::cin >> num;
      sum += static_cast<int>(num - '0');
    }
    std::cout << sum << std::endl;
  }
  return 0;
}
