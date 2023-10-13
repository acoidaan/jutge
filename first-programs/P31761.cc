/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P31761.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 09 2023
  * @brief This is a program that multiplies three numbers
  * @bug Jutge won't mark this as correct
  * @see https://jutge.org/problems/P31761_en
  */
#include <iostream>
int main() {

  long long numero1{};
  long long numero2{};
  long long numero3{};
        
    std::cin >> numero1 >> numero2;
    numero3 =  numero1 * numero2;
    std::cout << numero3 << std::endl;

return 0;

}
