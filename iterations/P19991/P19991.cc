/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P19991.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that prints the total number of coins in the two
  * diagonals of the boards
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P19991_en
  */
#include <iostream>
int main() {
  int size;
  int sum{0};
  char num;
  std::cin >> size;
  for (int i{0}; i < size; i++) {
    for (int j{0}; j < size; j++) {
      std::cin >> num;
      if (i == j || i + j == size - 1) {
        sum += static_cast<int>(num - '0');
      }
    }
  }
  std::cout << sum << std::endl;
  return 0;
}

