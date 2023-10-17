/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P78142_average.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 16 2023
  * @brief This is a program that reads a given amount numbers and prints the
  * average
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P78142_en
  */
#include <iostream>
#include <iomanip>
int main() {
  double num{0}, sum{0}, amount_of_nums{0};
  while (std::cin >> num) {
    sum += num; // Accumulates the amount of the numbers given and adds them. 
    amount_of_nums++; // Add 1 to the amount of numbers given.
  }

std::cout << std::fixed << std::setprecision(2) << sum / amount_of_nums <<
std::endl;

  return 0;
}
