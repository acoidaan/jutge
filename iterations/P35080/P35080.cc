/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P35080.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that draws n x n squares
  * @bug There are no known bugs 
  * @see https://jutge.org/problems/P35080_en
  */
#include <iostream>
#include <string>
int main() {
  int number{0}, counter{0};
  std::string numbers = "0123456789";
  while (std::cin >> number) {  
    for (int i{0}; i < number; i++) {
      if (counter != 0) {
        std::cout << std::endl;
      }
      int w{0};
      for (int j{0}; j < number; j++) {
        for (int k{0}; k < number; k++) {
          std::cout << numbers[w];
          w++;
          if (w >= 10) {
            w = 0;
          }
        }
        std::cout << std::endl;
      }
      counter++;
    }
  }
  return 0;
}


