/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P71310.cc
  * @date 9 Nov 2023
  * @brief This is a program prints the scalar product of two vectors
  * @bug No known bugs
  * @see https://jutge.org/problems/P71310_en
*/
#include <iostream>
#include <vector>
double scalar_product(const std::vector<double>& u, const std::vector<double>& v) {
  double result{0.0};
  for (int i{0}; i < u.size(); i++) {
    result += u[i] * v[i];
  }
  return result;
}

int main() {
  std::vector<double> u{0.0, 0.0, 0.0};
  std::vector<double> v{0.0, 0.0, 0.0};
  std::cin >> u[0] >> u[1] >> u[2] >> v[0] >> v[1] >> v[2];
  std::cout << scalar_product(u, v) << std::endl;
}