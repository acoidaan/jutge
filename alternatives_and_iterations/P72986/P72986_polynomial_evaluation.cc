/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P72986_polynomial_evaluation.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 25 2023
  * @brief This is a program that reads a number x and a polynomial p(z) = c0 z0
  *  + c1 z1 + ⋯ + cn zn, and computes p(x).
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P72986_en/
  */
#include <iostream>
#include <vector>
#include <iomanip>

// Function to calculate p(x) for the polynomial using Horner's rule
double calculatePolynomial(const std::vector<double> &vector_coefficients, double user_number) {
  double result{0};
  for (int i = 0; i < vector_coefficients.size(); ++i) {
    result = result * user_number + vector_coefficients[i];
  }
  return result;
}

// Function to read the coefficient of the polynomial
std::vector<double> readCoefficients() {
  std::vector<double> vector_coefficients;
  double coefficient;
  while (std::cin >> coefficient) {
    vector_coefficients.emplace_back(coefficient);
  }
  return vector_coefficients;
}

// Main function that prints the result

int main() {
  double user_number;
  std::cin >> user_number;

  std::vector<double> vector_coefficients = readCoefficients();
  double result = calculatePolynomial(vector_coefficients, user_number);

  std::cout << std::fixed << std::setprecision(4) << result << std::endl;

  return 0;
}
