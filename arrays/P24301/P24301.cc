/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P24301.cc
  * @date 9 Nov 2023
  * @brief This is a program that concatenates two vectors
  * @bug No known bugs
  * @see https://jutge.org/problems/P24301_en
*/
#include <iostream>
#include <vector>

std::vector<int> concatenation(const std::vector<int>& v1, const std::vector<int>& v2) {
  std::vector<int> v3{v1};
  for (int i{0}; i < v2.size(); i++) {
    v3.emplace_back(v2[i]);
  }
  return v3;
}

