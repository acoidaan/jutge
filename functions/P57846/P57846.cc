/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P57846.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the maximum of two numbers
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57846_en
  */
#include <iostream>
#include <cmath>
int max2(int a, int b) {
  int value = std::max(a, b);
  return value;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << max2(a, b) << std::endl;
  return 0;
}

