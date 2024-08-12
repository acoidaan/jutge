/**
  * Universisdad de La Laguna
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P93157.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 8 Nov 2023
  * @brief This is a program that 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P93157_en
  */ 
#include <iostream>
int GreatestCommonDivisor(int a, int b) {
  if (b == 0) {
     return a;
  }
     return GreatestCommonDivisor(b, a % b);
}

bool read_rational(int& num, int& den) {
  char slash;
  std::cin >> num >> slash >> den;
  if (std::cin) {
    int gcd = GreatestCommonDivisor(num, den);
    num /= gcd;
    den /= gcd;
    return true;
  }
  return false;
}

int main() {
  int num, den;
  while (read_rational(num, den)) {
    std::cout << num << ' ' << den << std::endl;
  }
  return 0;
}