/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P96275.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a function that returns the absolut value of n
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96275_en
  */
#include <iostream>
#include <cmath>
int absolute(int n) {
  int value = abs(n);
  return value;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << absolute(n) << std::endl;
  return 0;
}

