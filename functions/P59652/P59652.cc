/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @file P59652.cc
  * @date 7 Nov 2023
  * @brief This is a program that reads a rational number and prints it
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59652_en
*/
#include <iostream>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void read_rational(int& num, int& den) {
    char c;
    std::cin >> num >> c >> den;
    int g = gcd(num, den);
    num /= g;
    den /= g;
}

int main() {
    int num, den;
    read_rational(num, den);
    std::cout << num << '/' << den << std::endl;
    return 0;
}
