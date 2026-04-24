/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the maximum of four numbers
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P73231_en
  */
#include <iostream>
#include <cmath>
int max4(int a, int b, int c, int d) {
  int value_right = std::max(c, d);
  int value_left = std::max(a, b);
  int value = std::max(value_left, value_right); 
  return value;
}

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  std::cout << max4(a, b, c, d); 
  return 0;
}
