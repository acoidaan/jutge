/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P18777.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 2 Nov 2023
  * @brief This is a program that returns the day of the week
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P18777_en
  */  
#include <iostream>
#include <string>
std::string day_of_the_week(int d, int m, int y) {
  int m_prime = (m - 2); // Step 1
  int y_prime = y;
  if (m_prime <= 0) {
    m_prime += 12;
    y_prime = y - 1;
  }
  int c = y_prime / 100; // Step 2
  int a = y_prime % 100; // Step 3
  int f = (static_cast<int>(2.6 * m_prime - 0.2)) + d + a + a / 4 + c / 4 - 2 * c % 7;
  if (f < 0) {
    f += 7;
  }
  std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday"};
  return days[f];
}

int main() {
  int d, m, y;
  while (std::cin >> d >> m >> y) {
    if (y < 1800 && y > 9999) {
      std::cout << day_of_the_week(d, m, y) << std::endl;
    }
  }

    return 0;
}
