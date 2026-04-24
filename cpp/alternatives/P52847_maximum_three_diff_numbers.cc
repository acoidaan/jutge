/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P52847_maximum_three_numbers.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads three numbers and prints their maximum
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P52847_en
  */
#include <iostream>
int main() {
  int num1{};
  int num2{};
  int num3{};
  std::cin >> num1 >> num2 >> num3;
  
  if(num1 > num2 && num1 > num3) {
    std::cout << num1 << std::endl;
  } else {
      if(num2 > num1 && num2 > num3) {
      std::cout << num2 << std::endl;
      } else { 
        std::cout << num3 << std::endl;
        }
    }
  return 0;
}
