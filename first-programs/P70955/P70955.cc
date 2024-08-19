#include <iostream>
int main() {
  int years, days, hours, minutes, seconds, output;

    std::cin >> years >> days >> hours >> minutes >> seconds;
    output = (years * 31536000) + (days * 86400) + (hours * 3600) + (minutes * 60) + (seconds);
    std::cout << output << std::endl;

return 0;


}
