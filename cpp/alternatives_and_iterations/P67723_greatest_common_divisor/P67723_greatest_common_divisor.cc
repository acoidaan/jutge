/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P67723.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 18 2023
  * @brief This is a program that reads two strictly positive numbers and prints
  * the greatest common divisor
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P67723_en
 */
#include <iostream>
#include <iostream>

// Function to compute the greatest common divisor using Euclidean algorithm
int GreatestCommonDivisor(int number1, int number2) {
  if (number2 == 0) {
     return number1;
  }
     return GreatestCommonDivisor(number2, number1 % number2);
}

int main() {
  int number1, number2;
  std::cin >> number1 >> number2; 
  int result = GreatestCommonDivisor(number1, number2); 
  std::cout << "The gcd of " << number1 << " and " << number2 << " is " << result << "." << std::endl;
  
  return 0;
}

