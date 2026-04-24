/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P37760.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the sine and cosine of an angle given
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37760_en
  */
#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
  double user_input{0.0};
  while (std::cin >> user_input) {
    double sine = sin (user_input * M_PI / 180.0);
    double cosine = cos (user_input * M_PI / 180.0); 
    std::cout << std::fixed << std::setprecision(6) << sine << " " << cosine << std::endl;
  }
  return 0;
}
