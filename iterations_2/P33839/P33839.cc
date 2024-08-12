#include <vector>
#include <iostream>
int CalculateDigits(int number) {
  int suma{};
  while (number > 0) {
    suma += number % 10;
    number /= 10;
  }

  return suma;  
}

void PrintResults(const std::vector<int> &numbers) {
  for (int i = 0; i < numbers.size(); i++) {
    int suma = CalculateDigits(numbers[i]);
    std::cout << "The sum of the digits of " << numbers[i] << " is " << suma << "." << std::endl;
  }
}

int main() {  
  std::vector<int> numbers;
  int number;
  while (std::cin >> number) {
    numbers.emplace_back(number);
  }

  PrintResults(numbers);
  
  return 0;
}