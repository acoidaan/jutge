/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P55722.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 1 Nov 2023
  * @brief This is a program that returns the number of digits in a number n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P55722_en
  */
#include <iostream>
#include <vector>
int number_of_digits(int n) {
  int count = 0;
  if (n == 0) {
    return 1;
  }
  while (n != 0) {
    n /= 10;
    count++;
  }
  return count;
}

int main() {
  int n{0};
  std::cin >> n;
  std::cout << number_of_digits(n) << std::endl;

  return 0;
}


