/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P98458.cc
  * @date 6 Nov 2023
  * @brief This is a program prints the min and max of a number
  * @bug No known bugs
  * @see https://jutge.org/problems/P98458_en
*/
#include <iostream>
#include <cmath>
void min_max(int a, int b, int& mn, int& mx) {
  if (a < b) {
    mn = a;
    mx = b;
  } else {
    mn = b;
    mx = a;
  }
}int main() {
  int a, b;
  std::cin >> a >> b;
  int mn, mx;
  min_max(a, b, mn, mx);
  std::cout << mn << " " << mx << std::endl;
  return 0;
}
