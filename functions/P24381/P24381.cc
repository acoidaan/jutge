/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @file P24381.cc
  * @date 6 Nov 2023
  * @brief This is a program that prints a cross by parameters
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P24381_en
  #include <iostream>
*/
#include <iostream>
void cross(int n, char c) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j || i == n - j - 1) {
        std::cout << c;
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
}

int main() {
  int n;
  char c;
  std::cin >> n >> c;
  cross(n, c);
  return 0;
}
