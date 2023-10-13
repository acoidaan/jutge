/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P34279_add_one_second.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279_en
  */
#include <iostream>
int main() {
 
  int horas{};
  int minutos{};
  int segundos{};
  
  std::cin >> horas >> minutos >> segundos;
  segundos++;
  
  if(segundos == 60) {
    segundos = 0;   
    minutos++; 
  }
  if(minutos == 60) {
    segundos = 0;
    minutos = 0;
    horas = (horas + 1) % 24;
  } else {
    }

  std::cout << (horas < 10 ? "0" : "") << horas << ":" << (minutos < 10 ? "0" : "") <<
minutos << ":"<< (segundos < 10 ? "0" : "") << segundos << std::endl; 


  return 0;
}
