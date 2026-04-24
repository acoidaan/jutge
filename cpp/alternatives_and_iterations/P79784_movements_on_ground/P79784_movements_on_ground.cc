/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P79784_movements_on_ground.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 16 2023
  * @brief This is a program that reads a sequence of 4 letters, and prints a
  * coordinate.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P79784_en
  */
#include <iostream>
int main() {
  int coordinate1{0};
  int coordinate2{0};
  std::string instruction{};
  std::cin >> instruction;
  
  for(char letter : instruction) {
    if(letter == 's') {
    coordinate2++;
    } else {
      if(letter == 'n') {
      coordinate2--;
      } else {
        if(letter == 'e') {
        coordinate1++;
        } else {
          if(letter == 'w') {
          coordinate1--;
          } else {
            }
          }
        }
      }
    }
std::cout << "(" << coordinate1 << ", " << coordinate2 << ")" << std::endl;

  return 0;
}
