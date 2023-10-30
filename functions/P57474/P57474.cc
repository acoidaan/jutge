/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P57474.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the factorial of n
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57474_en
  */
#include <iostream>
int factorial(int n) {
  int value = (n == 1 || n == 0) ? 1 : factorial(n-1) * n;
  return value;
}

int main() {
  int n;
  std::cin >> n;
  if (n >= 0 && n <= 12) {
  std::cout << factorial(n) << std::endl;
  } else {
    std::cout << std::endl;
  }
  return 0;
}
