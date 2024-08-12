/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * @file P65437.cc
  * @date 6 Nov 2023
  * @brief This is a program that swaps the value of its parameters.
*/
#include <iostream>

void swap2(int& a, int& b) {
  int aux = a;
  a = b;
  b = aux;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  swap2(a, b);
  std::cout << a << " " << b << std::endl;
  return 0;
}

