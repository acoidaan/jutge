/*
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P21281.cc
  * @date 6 Nov 2023
  * @brief This is a program that  decomposes a number in its prime factors
  * @bug No known bugs
  * @see https://jutge.org/problems/P21281_en
*/

#include <iostream>
void factor(int n, int &f, int &q) {
  int i{2};
  q = 1;
  f = n;
  while (i * i <= n) {
    int j{0};
    while (n % i == 0 & n != 0) {
      ++j;
      n /= i;
    }
    if ( j > q || (j == q && f > i)) {
      q = j;
      f = i;
    }
    ++i;
    }
}

int main() {
  int kNumero{0};
  while (std::cin >> kNumero) {
    int kFrecuence{0}, kQuantity{0};
    factor(kNumero, kFrecuence, kQuantity);
    std::cout << kFrecuence << ' ' << kQuantity << std::endl;
  }
  return 0;
}
