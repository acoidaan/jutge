/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P96767_polynomial_evaluation.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 24 2023
  * @brief This is a program that reads number x and a polynomial p(z) = c0 z0 
  * + c1 z1 + ⋯ + cn zn, and computes p(x). 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96767_en
  */

#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>

// Function to calculate p(x)
double calculatePolynomial(const std::vector<double> &coefficients, double user_number) {
  double result = 0;
  for (int i = 0; i < coefficients.size(); ++i) {
    result += coefficients[i] * pow(user_number, i);
  }
  return result;
}

// Function to reads the coefficientes
std::vector<double> readCoefficients() {
  std::vector<double> coefficients;
  double coefficient;
  while (std::cin >> coefficient) {
      coefficients.emplace_back(coefficient);
  }
  return coefficients;
}

// main function to print the results
int main() {
  double user_number;
  std::cin >> user_number;

  std::vector<double> coefficients = readCoefficients();
  double result = calculatePolynomial(coefficients, user_number);

  std::cout << std::fixed << std::setprecision(4) << result << std::endl;

  return 0;
}
