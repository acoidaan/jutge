/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P61061.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that prints the products of the digits of one
  * number  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P61061_en
  */
#include <iostream>
#include <vector>
int GetProduct(int number) {
    int product{1};
    if (number == 0) {
        return product = 0;
    }
    while(number != 0) {
        product *= (number % 10);
        number /= 10;
    }
    return product;
}

int main() {
  int num{0};
  while (std::cin >> num) {
    int product_of_digits{GetProduct(num)};
    std::cout << "The product of the digits of " << num << " is " << product_of_digits << "." << 
      std::endl;
    while (product_of_digits >= 10) {
      num = product_of_digits;
      product_of_digits = GetProduct(num);
      std::cout << "The product of the digits of " << num << " is " << product_of_digits << "." << std::endl;
    }
    std::cout << "----------" << std::endl;
  }
  return 0;
}




