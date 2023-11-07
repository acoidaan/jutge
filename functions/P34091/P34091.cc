/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P34091.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 2 Nov 2023
  * @brief This is a program that returns if a number is perfect or not
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34091_en
  */  
#include <iostream>
bool is_perfect(int n) {
int i{1}, sum{0};
  while (i < n) {
    if (n % i == 0) 
      sum += i;
      i++;
  }
  if (sum == n) {
    return true;
  }
  return false;
}

int main() {
  int n;
  std::cin >> n;
  if (n == 0) {
    std::cout << "false" << std::endl;
    return 0;
  }
  if (is_perfect(n)) {
      std::cout << "true" << std::endl;
  } else {
      std::cout << "false" << std::endl; 
    }
    return 0;
}
