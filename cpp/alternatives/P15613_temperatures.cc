/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P15613_temperatures.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads an integer number that represents a temperature given in degree
Celsius, and that tells if the weather is hot, if it’s cold, or if it’s ok. Moreover, warn if with the given temperature water
would boil, or if water would freeze.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P15613_en
  */
#include <iostream>
int main() {  
int temp{};
  std::cin >> temp;
  if(temp > 30) {
    std::cout << "it's hot" << std::endl;
  } else {
      if(temp <= 30 && temp >= 10) {
      std::cout << "it's ok" << std::endl;
      } else {
          std::cout << "it's cold" << std::endl; 
        }
    }
  if(temp >= 100) {
    std::cout << "water would boil" << std::endl;
  } else {
      if(temp <= 0) {
        std::cout << "water would freeze" << std::endl;
      }
    }
  return 0;
}
