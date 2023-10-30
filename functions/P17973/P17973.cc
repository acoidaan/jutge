/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P17973.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the double factorial of a number
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P17913_en
  */
#include <iostream>
int double_factorial(int x) {
  int value = (x == 1 || x == 0 ? 1 : double_factorial(x-2) * x);
      return value;
}

int main() {
  int x;
  std::cin >> x;
  if (x >= 0 && x <= 19) {
  int value = double_factorial(x);
  std::cout << value << std::endl;
  } else {
    std::cout << std::endl;
  return 0;
  }
}

   

