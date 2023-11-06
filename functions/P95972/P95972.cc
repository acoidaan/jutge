/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Bás ica
  * @file P95972.cc
  * @date 6 Nov 2023
  * @brief This is a program that returns the sum of the divisors of a number n.
*/

#include <iostream>
int sum_divisors(int x) {
  int sum = 0;
  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      sum += i;
    }
  }
  return sum;
}

