/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P92613.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 25 2023
  * @brief This is a program that
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P92613_en
  */  
#include <iostream>
#include <cmath>
int main() {
  double number;
  std::cin >> number;
  if (number < 0) {
    return 0;
  }
  int floor_number = floor(number);
  int ceil_number = ceil(number);
  int rounded_number = round(number);

  std::cout << floor_number << " ";
  std::cout << ceil_number << " ";
  std::cout << rounded_number << std::endl;

  return 0;
}
