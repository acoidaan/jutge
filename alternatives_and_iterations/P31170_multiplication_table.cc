/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P31170_multiplication_table.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads one number and prints it's
  * multiplication table.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31170_en
  */
#include <iostream>
int main() {
  int numero{};
  std::cin >> numero;
  for(int i = 1; i <= 10; i++) {
  std::cout << numero << "*" << i << " = " << (numero * i) << std::endl;
  }
 


  return 0;
}
