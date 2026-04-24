/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P50497.cc
  * @date 9 Nov 2023
  * @brief This is a program that decides if a word is palindrome or not
  * @bug No known bugs
  * @see https://jutge.org/problems/P50497_en
*/
#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string& s) {
  int n = s.length();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - i - 1]) {
      return false;
    }
  }
  return true;
}