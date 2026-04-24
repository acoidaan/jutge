/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P95541.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 6 Nov 2023
  * @brief This is a program that prints by parameters
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P95541_en
  */
  #include <iostream>

  void print(int s, char c, int n) {
    for (int i = 0; i < s; ++i) {
      std::cout << ' ';
    }
    for (int i = 0; i < n; ++i) {
      std::cout << c;
    }
    std::cout << std::endl;
  }

int main() {
  int s, n;
  char c;
  std::cin >> s >> c >> n;
  print(s, c, n);
  }