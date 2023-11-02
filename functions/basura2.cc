
#include <iostream>

bool is_perfect(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
  int n;
  std:cin >> n;
  std::cout << (is_perfect(n) ? "true" : "false") << std::endl;
  return 0;
}

