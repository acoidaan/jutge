/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P38045.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints its square and its square root
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P38045_en
  */
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
  double number{0.0};
  while (std::cin >> number) {
    double square_root = sqrt(number);
    int power = number * number;
    std::cout << std::fixed << std::setprecision(6) << power << " " << square_root << std::endl;
    }
  return 0;
}
