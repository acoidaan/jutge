/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P39359.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that
  * @bug There are no known bugs
  * @see
  */
#include <iostream>
#include <string>
int main() {
  int number{0}, counter{0}, k{0};
  std::string numbers = "0123456789";
  while (std::cin >> number) {
    if (counter != 0) {
      std::cout << std::endl;
    }
    for (int i{0}; i < number; i++) {
      for (int j{0}; j < number; j++) {
        std::cout << numbers[k];
        k++;
        if (k >= 10) {
              k = 0;
        }
      }
      std::cout << std::endl;
    }
    counter++;
  }
  return 0;
}

