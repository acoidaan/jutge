/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P88790.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the greatest common divisor
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P88790_en
  */ 
#include <iostream>
int gcd(int a, int b) {
  if (b == 0) {
     return a;
  }
     return gcd(b, a % b);
}

int gcd4(int a, int b, int c, int d) {
  int result = gcd(gcd(gcd(a, b), c), d);
  return result;
}

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;  
  int result = gcd4(a, b, c, d); 
  std::cout << result << std::endl;
  
  return 0;
}

