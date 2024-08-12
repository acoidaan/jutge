/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P80660.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that represents the sequence of collatz
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660_en
  */
#include <iostream>
int Collatz(int number) {
  int count{0};
  if (number > 0) {
    while (number != 1) {
      if (number % 2 == 0) {
        number /= 2;
      } else {
          number *= 3;
          number += 1;
      }
      count++;
    }
  }
  return count;
}

int main() {
  int number;
  while (std::cin >> number) {
    std::cout << Collatz(number) << std::endl;
  }
    return 0;
}

