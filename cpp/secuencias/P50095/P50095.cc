#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(const int& n) {
  if (n <= 1) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;

  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  for (int i, j; cin >> i && isPrime(i);) {
    if (i <= 2) i -= 1;
    for (j = i + 2; !isPrime(j); j += 2);
    cout << j << endl;
  }
  return 0;
}
