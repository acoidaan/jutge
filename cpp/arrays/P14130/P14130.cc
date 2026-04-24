/**
  * Universisdad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P14130.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date 8 Nov 2023
  * @brief This is a program that tells the amount of numbers that are equal to the previous one
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
  */ 
#include <iostream>
#include <vector>

int countLastElement(std::vector<int> &nums) {
  if (nums.size() < 2) {
    return 0;
  }
  int count{0};
  int last{nums.back()};

  for (int i{0}; i < nums.size() - 1; ++i) {
    if (nums[i] == last) {
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> nums;
  for (int i{0}; i < n; ++i) {
    int num;
    std::cin >> num;
    nums.emplace_back(num);
  }
  int result = countLastElement(nums);
  std::cout << result << std::endl;
  return 0;
}