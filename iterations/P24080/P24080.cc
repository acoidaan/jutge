/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P24080.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P24080_en
  */
#include <iostream>
int main() {
  int number{0}, counter{0};
  while (std::cin >> number) {
    if (counter != 0) {
      std::cout << std::endl;
    }
    for (int i{0}; i < number; i++) {
      for (int j{0}; j < number; j++) {
        std::cout << number;
      }
      std::cout << std::endl;
    }
    counter++;
  }
  return 0;
}
