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
void factor(int n, int& f, int& q) {
  f = 2;
  q = 0;
  int count = 0;
  for (int i = 2; i <= n; ++i) {
    if (n % i == 0) {
      int temp_count = 0;
      int temp_n = n;
      while (temp_n % i == 0) {
        ++temp_count;
        temp_n /= i;
      }
      if (temp_count > count || (temp_count == count && i < f)) {
        f = i;
        count = temp_count;
      }
    }
  }
  q = count;
}

int main() {
  int n, f, q;
  std::cin >> n;
  factor(n, f, q);
  std::cout << f << ' ' << q << std::endl;
  return 0;
}