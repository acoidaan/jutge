/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P59539_harmonic_numbers_1.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads a number (n) and prints the n-th
  * harmonic number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539_en
  */
#include <iostream>
#include <iomanip>
int main() {
  int numero{};
  double harmonic{};
  std::cin >> numero;
  for(int i = 1; i <=numero; i++) {
  harmonic += (1.0/i); 
  }
  int temporal = static_cast<int>(harmonic * 10000 + 0.5);
  harmonic = static_cast<double>(temporal) / 10000;
  std::cout << std::fixed << std::setprecision(4) << harmonic << std::endl;
  



  return 0;
}
