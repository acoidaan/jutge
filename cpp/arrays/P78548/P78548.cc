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
  * @see https://jutge.org/problems/P14130_en
  */ 
#include <iostream>
#include <algorithm>
void reverseStrings(std::string& str) {
  reverse(str.begin(), str.end());
}

int main() {
  std::string str;
  while (std::cin >> str) {
    reverseStrings(str);
    std::cout << str << std::endl;
  }
}
