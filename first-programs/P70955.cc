#include <iostream>
int main() {
  int years{};
  int days{};
  int hours{};
  int minutes{};
  int seconds{};
  int output{};

    std::cin >> years >> days >> hours >> minutes >> seconds;
    output = (years * 365 * 24 * 60 * 60) + (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + (seconds);
    std::cout << output << std::endl;

return 0;


}
