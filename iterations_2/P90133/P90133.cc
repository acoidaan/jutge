/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P90133.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 29 2023
  * @brief This is a program that 
  * @bug There are no known bugs
  * @see
  */
#include <iostream>
int integerLogarithm(int base, int num) {
    int result = 0;
    while (num >= base) {
        num /= base;
        result++;
    }
    return result;
}

int main() {
    int base, number;
    while (std::cin >> base >> number) {
        int result = integerLogarithm(base, number);
        std::cout << result << std::endl;
    }
    return 0;
}

