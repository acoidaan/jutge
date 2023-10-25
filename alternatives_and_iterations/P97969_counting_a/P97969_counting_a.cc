/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P97969_counting_a.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 16 2023
  * @brief This is a program that reads a sentence ended with a period and
  * prints the number of letters "a". 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97969_en
  */
#include <iostream>
#include <string>
int main() {
  std::string sentence{};
  int count{};
  std::getline(std::cin, sentence, '.');
  
  for(char i : sentence) {
    if(i  == 'a') {
      count++;
    }
  }
  std::cout << count << std::endl;
  return 0;
}
