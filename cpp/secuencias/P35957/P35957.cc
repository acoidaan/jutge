#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;
  char c;
  bool a = true;
  string s;
  cin >> s;
  if (s.size() % 2 == 0) {
    cout << 'B' << endl;
    return 1;
  } else {
    c = s[s.size() / 2];
  }
  for (int i = 1; i < number * 2; i++) {
    a^=1;
    cin >> s;
    if (c != s[s.size() / 2] || s.size() % 2 == 0) {
      if (a) cout << 'B' << endl;
      else cout << 'A' << endl;
      return 1;
    }
  }
  cout << '=' << endl;
  return 0;
}