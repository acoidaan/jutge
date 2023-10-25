/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P62421_three_words.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 16 2023
  * @brief This is a program that reads three words and prints them reversed.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421_en
  */
#include <iostream>
#include <string>
int main() {
  std::string word1{};
  std::string word2{};
  std::string word3{};
  std::cin >> word1 >> word2 >> word3;
  std::cout << word3 << " " << word2 << " " << word1<< std::endl;


  return 0;
}
