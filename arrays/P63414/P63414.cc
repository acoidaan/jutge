/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P63414.cc
  * @date 9 Nov 2023
  * @brief This is a program that count the frequence of a number in a sequence
  * @bug No known bugs
  * @see https://jutge.org/problems/P63414_en
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int numbers[n];
  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }
  sort(numbers, numbers + n);
  int count = 1;
  for (int i = 1; i <= n; ++i) {
    if (i == n || numbers[i] != numbers[i - 1]) {
      cout << numbers[i - 1] << " : " << count << endl;
      count = 1;
    } else {
      count++;
    }
  }
  return 0;
}

