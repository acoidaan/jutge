/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @file P24381.cc
  * @date 6 Nov 2023
  * @brief This is a program that prints a cross by parameters
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P24381_en
*/
#include <iostream>
using namespace std;

void cross(int n, char c) {
  for (int i{0}; i < (n - 1) / 2; ++i) {
    for (int j{0}; j < (n - 1) / 2; ++j)
      cout << " ";
    cout << c << endl;
  } 
  for (int j{0}; j < n; ++j)
    cout << c;
  cout << endl;
  for (int i {0}; i < (n - 1) / 2; ++i) {
    for (int j = 0; j < (n - 1) / 2; ++j)
      cout << " ";
    cout << c << endl;
  }
}
int main() {
  int tamanyo;
  char contenido;
  while (cin >> tamanyo >> contenido) {
    cross(tamanyo, contenido);
  }
  return 0;
}
