/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P37469_time_decomposition.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 13 2023
  * @brief This is a program that reads an amount of seconds and prints these
  * seconds converted in hours, minutes and seconds.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37469_en
  */
#include <iostream>
int main() {
  int segundos{}; 
  int horas{};
  int minutos{};
  std::cin >> segundos; 
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;
  std::cout << horas <<  " " << minutos << " " << segundos << std::endl;

  return 0;
}
