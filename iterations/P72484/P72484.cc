/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P72484.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that prints a rhombus of size n
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P72484_en
  */
#include <iostream>

int main() {
  int number;
  std::cin >> number;
  for (int i = 1; i <= number; ++i) {
    for (int j = 0; j < number - i; ++j) {
      std::cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  for (int i = number - 1; i >= 1; --i) {
    for (int j = 0; j < number - i; ++j) {
      std::cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}

