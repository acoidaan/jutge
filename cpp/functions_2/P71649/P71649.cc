/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @file P71649.cc
  * @date 7 Nov 2023
  * @brief This is a program that prints the amount of nums and the sum of the nums given
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71649_en
*/
#include <iostream>
#include <iostream>

void count_and_add(int& num, int& sum) {
  num = 0;
  sum = 0;
  int input;
  while (std::cin >> input) {
    num++;
    sum += input;
  }
}

int main() {
  int num{0};
  int sum{0};
  count_and_add(num, sum);
  std::cout << num << ' ' << sum << std::endl;
}
