/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P98458.cc
  * @date 6 Nov 2023
  * @brief This is a program that shorts three numbers
  * @bug No known bugs
  * @see https://jutge.org/problems/P32954_en
*/
#include <iostream>
void sort3(int& a, int& b, int& c) {
  if (a > b) {
    std::swap(a, b);
  }
  if (a > c) {
    std::swap(a, c);
  }
  if (b > c) {
    std::swap(b, c);
  }
}

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  sort3(a, b, c);
  std::cout << a << " " << b << " " << c << std::endl;
  return 0;
}