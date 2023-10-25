/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file.cc P28754_reversed_number_in_binary.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads a number and prints it in it's binary
  * form and reversed.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P28754_en
  */
#include <iostream>
int main() {
  int num;
  std::cin >> num;
  if(num == 0) {
      std::cout << "0" << std::endl;
  } else {
      while(num > 0) {
        std::cout << (num & 1);
        num >>= 1;
      }
      std::cout << std::endl;
    }

  return 0;
}

