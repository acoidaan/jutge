/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P97156_numbers_in_an_interval.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads two numbers and prints all the numbers
  * between them.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97156_en
  */
#include <iostream>
int main() {
  int num1{};
  int num2{};
  std::cin >> num1 >> num2;
  if(num1 <= num2) {
  std::cout << num1;
    for(int i = num1 + 1; i <=num2; i++) {
      std::cout << "," << i; 
    }
  std::cout << std::endl;
  } else {
    std::cout << std::endl;
    }



  return 0;
}
