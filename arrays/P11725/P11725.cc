/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P11725.cc
  * @date 9 Nov 2023
  * @brief This is a program that finds x in a vector
  * @bug No known bugs
  * @see https://jutge.org/problems/P11725_en
*/
#include <iostream>
#include <vector>
bool exists(int x, const std::vector<int>& v) {
  int n = v.size();
  for (int i{0}; i < n; i++) {
    if (v[i] == x) {
      return true;
    }
  }
  return false;
}