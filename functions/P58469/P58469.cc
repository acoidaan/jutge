/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P58469.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 1 Nov 2023
  * @brief This is a program that if a date is valid
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58459_en  
  */ 
#include <iostream>

bool is_leap_year(int y) {
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

bool is_valid_date(int d, int m, int y) {
    if (y < 1800 || y > 9999 || m < 1 || m > 12 || d < 1) {
        return false;
    }
    if (m == 2) {
        if (is_leap_year(y)) {
            return (d <= 29);
        } else {
            return (d <= 28);
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return (d <= 30);
    } else {
        return (d <= 31);
    }
}

int main() {
  int d, m, y;
  std::cin >> d >> m >> y;
  if (is_valid_date(d, m, y)) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
    }
  return 0;
}
