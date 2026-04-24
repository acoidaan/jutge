#include <iostream>
int main() {
  int number;
  std::cin >> number;
  for (int i = 1; i <= number; ++i) {
    int count = 0;
    int previous, next;
    std::cin >> previous;
      while (previous > 0) {
        std::cin >> next;
        if (previous < next) ++count;
        previous = next;
      }
    std::cout << count << std::endl;
  }
  return 0;
}