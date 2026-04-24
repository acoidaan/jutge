/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P22654.cc
  * @date 6 Nov 2023
  * @brief This is a program that decomposes a number in hours, minutes and seconds
  * @bug No known bugs
  * @see https://jutge.org/problems/P22654_en
*/
#include <iostream>
void decompose(int n, int& h, int& m, int& s) {
  s = n % 60;
  m = (n / 60) % 60;
  h = n / 3600;
}

int main() {
  int n, h, m, s;
  std::cin >> n;
  decompose(n, h, m, s);
  std::cout << h << " " << m << " " << s << std :: endl;
  return 0;  
}