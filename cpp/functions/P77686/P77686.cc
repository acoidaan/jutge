/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P77686.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 1 Nov 2023
  * @brief This is a program that returns if a number is palindromic
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P77686_en
  */  
#include <iostream>
bool is_palindromic(int n) {
  int reversed{0}, original{n};
  while (n > 0) {  
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  return (original == reversed); 
}

int main() {
  int n;
  std::cin >> n;
  if (is_palindromic(n)) {
      std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
    }
  return 0;
}


