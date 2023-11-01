/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P96564.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the least common multiple
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96564_en
  */ 
#include <iostream>
#include <vector>
int gcd(int a, int b) {
  if (b == 0) {
     return a;
  }
     return gcd(b, a % b);
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

int main() {
  int number;
  while(std::cin >> number && number) {
    std::vector<int> numbers(number);
    if (number == 0) {
      break;
    }
   for (int i{0}; i < number; ++i) {
     std::cin >> numbers[i];
   }
   int result = numbers[0];
     for (int i = 1; i < number; ++i) {
       result = lcm(result, numbers[i]);
     }
   std::cout << result << std::endl;
  }
  return 0;
}

