/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P95972_suma_de_divisores.cc
 * @author Cathaysa Acosta Hernández alu0101671574@ull.edu.es
 * @date Nov 4th 2023
 * @brief This is a program that returns the sum of 
 * the divisors of a number n.
 * @bug There are known bugs
 * @see https://jutge.org/problems/P95972_en
 */

#include <iostream>

int sum_divisors(int x) {
  int sum{0};
  int i;
  for (i = 1; (i * i) < x; ++i) {
    if (x % i == 0) {
      sum += i;
    }
  }
  for (i ; i >=1; --i){
    if ((x % i == 0) && (x / i != i - 1)){
      sum += (x / i);
    }
  }
  return sum;
}

int main() {
   int number;
  while (std::cin >> number) {
    std::cout << sum_divisors(number) << std::endl;
  }
  return 0;
}
