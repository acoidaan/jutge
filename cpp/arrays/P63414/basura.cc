#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int freq[1001] = {0};
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    freq[x]++;
  }
  for (int i = 0; i < 1001; ++i) {
    if (freq[i] > 0) {
      cout << i << " : " << freq[i] << endl;
    }
  }
  return 0;
}
