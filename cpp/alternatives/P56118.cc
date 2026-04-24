/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P56118.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 9 2023
  * @brief This is a program that reads two numbers and prints their maximum.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P56118_en 
  */

#include <iostream>
int main() {
  int numero1{};
  int numero2{};
  std::cin >> numero1 >> numero2;
  
    if(numero1 > numero2) {
    std::cout << numero1 << std::endl;
    }
    else {
    std::cout << numero2 << std::endl;
    }

return 0;

}
