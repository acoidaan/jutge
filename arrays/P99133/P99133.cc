/**
  * Universisdad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P78548.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 8 Nov 2023
  * @brief This is a program that inverts the characters of a string
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P99133_en
  */ 
#include <iostream>
#include <algorithm>
#include <vector>

void reverseStrings(std::string& str) {
  reverse(str.begin(), str.end());
}

int main() {
  int n;
  std::cin >> n;
  std::vector<std::string> strings(n);
  for (int i = 0; i < n; i++) {
    std::cin >> strings[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    reverseStrings(strings[i]);
    std::cout << strings[i] << std::endl;
  }
  return 0;
}