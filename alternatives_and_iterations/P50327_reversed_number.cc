/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P50327_reversed_number.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads one number and prints it reversed.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50327_en
  */
#include <iostream>
#include <vector>
int main() {
  std::string number{};
  std::cin >> number;
  std::vector<char> reversed_number{};
  for(int i = number.size() - 1; i >= 0; i--) {
  reversed_number.emplace_back(number[i]);
  }
  for(char digit : reversed_number) {
  std::cout << digit;
  }
  std::cout << std::endl;
  return 0;
}
