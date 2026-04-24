/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P55622_number_of_digits.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 16 2023
  * @brief This is a program that reads a number and prints its number of
  * digits.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P55622_en 
  */

#include <iostream>
#include <string>
int main() {
  std::string number{};
  std::cin >> number;
  std::cout << "The number of digits of " << number << " is " << number.size() <<
"." << std::endl;
 return 0;
}
