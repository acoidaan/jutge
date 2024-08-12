/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P79817.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that calculates the power of a pair of numbers
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P79817_en
  */
#include <iostream>
#include <cmath>
int main() {
  int number1, number2;
  while(std::cin >> number1 >> number2) {
  int result = pow(number1,number2);
  std::cout << result << std::endl;
  }
}

