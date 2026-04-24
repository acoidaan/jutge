/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P95401.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 1 Nov 2023
  * @brief This is a program that checks if a year is leap or not
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P95401_en
  */  
#include <iostream>
bool is_leap_year(int year) {
  if (year < 1800 || year > 9999) {
    return 0;
  }
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int year;
  std::cin >> year;
  if (is_leap_year(year)) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }
  
  return 0;
}

