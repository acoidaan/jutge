/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P61634.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 25 2023
  * @brief This is a program that
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P61634_en
  */
#include <iostream>
int main() {
  int year{};
  std::cin >> year;
  if (year < 1800 || year > 9999) {
    return 0;
  }
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    std::cout << "YES" << std::endl;
  } else {
      std::cout << "NO" << std::endl;
  }
 return 0;
}
