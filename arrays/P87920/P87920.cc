/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P87920.cc
  * @date 10 Nov 2023
  * @brief This is a program that tells if there is any number equal to the sum of the rest.
  * @bug No known bugs
  * @see https://jutge.org/problems/P87920_en
*/
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  P87920-EqualToSumOfRest_2.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 21 2022
 * @brief Write a program that, given a sequence of integer numbers, tells if
 * there is any number equal to the sum of the rest.
 * @see https://jutge.org/problems/P87920
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int kNumber;
  while (cin >> kNumber) {
    vector<int> v(kNumber);
    int suma = 0;
    for (int i = 0; i < kNumber; ++i) {
      cin >> v[i];
      suma += v[i];
    }
    bool encontrado = false;
    int i = 0;
    while (!encontrado && i < kNumber) {
      encontrado = (v[i] == suma - v[i]);
      ++i;
    }
    if (encontrado) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}