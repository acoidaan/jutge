/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P37500_first_numbers.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads one numbers and prints all the numbers
  * between 0 and the number given.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37500_en
  */
#include <iostream>
int main() {
  int numero{};
  std::cin >> numero;
  for(int i = 0; i <= numero; i++) {
    std::cout << i << std::endl; 
  } 
  
  return 0;
}
