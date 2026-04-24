/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P35547.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 25 2023
  * @brief This is a program that prints the Easter Sunday of the year given
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P35547_en 
  */
#include <iostream>
int main() {
  int k, x, b, c, q, p, y, z, n, e, d, m;
  while (std::cin >>y) {
  if (y < 1800 || y > 9999) {
    return 0;
  }
  k = y / 100;
  x = y % 19;
  b = y % 4;
  c = y % 7;
  q = k / 4;
  p = (13 + (8 * k)) / 25;
  y = (15 - p + k - q) % 30;
  z = ((19 * x) + y) % 30;
  n = (4 + k - q) % 7;
  e = ((2 * b) + (4 * c) + (6 * z) + n) % 7; 
  
  if ((z + e) <= 9) {
   d = 22 + z + e;
   m = 3;
  } else if (z == 29 && e == 6) {
      d = 19;
      m = 4;
    } else if (z == 28 && e == 6 && x > 10) {
        d = 18;
        m = 4;
      } else {
          d = z + e - 9;
          m = 4;
      }
  std::cout << d << "/" << m << std::endl;
  }
  return 0;
}

