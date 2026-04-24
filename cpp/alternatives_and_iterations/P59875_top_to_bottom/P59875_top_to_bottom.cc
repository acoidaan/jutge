/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P59875_top_to_bottom.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads two numbers, and print all numbers
  * between them, in decreasing order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59875_en
  */
#include <iostream>
int main() {
  int num1{};
  int num2{};
  std::cin >> num1 >> num2;
  if(num1 > num2) {
    for(int i = num1; i >= num2; i--) {
    std::cout << i << std::endl;
    }
  } else {
      for(int i = num2; i >= num1; i--) {
      std::cout << i << std::endl;
      }
    }
  return 0;
}
