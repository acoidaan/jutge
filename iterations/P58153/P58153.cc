/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P58153.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that prints Hn-Hm, (H = harmonic) 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153_en
  */
#include <iostream>
#include <iomanip>
double SubstractHarmonic(const double& number1, double& number2) {
  double resta{0.0};
  number2++;
  while (number2 <= number1) {
    resta += 1.0/number2;
    number2++;
  }
  return resta;
}

int main() {
   double number1{0.0}, number2{0.0};
  while (std::cin >> number1 >> number2) {
    if (number2 > number1) {
    return 1; 
    }
  std::cout << std::fixed << std::setprecision(10) << SubstractHarmonic(number1, number2) << std::endl;
  }

  return 0;
}
