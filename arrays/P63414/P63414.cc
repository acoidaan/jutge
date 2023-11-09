/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P63414.cc
  * @date 9 Nov 2023
  * @brief This is a program that count the frequence of a number in a sequence
  * @bug No known bugs
  * @see https://jutge.org/problems/P63414_en
*/
#include <iostream>
#include <vector>
int main() {
  int n;
  int sequence;
  std::cin >> n;
  std::vector<int> numbers;
  for (int i{0}; i <= n; ++i) {
    std::cin >> sequence;
    numbers.emplace_back{sequence};
    

  }
}