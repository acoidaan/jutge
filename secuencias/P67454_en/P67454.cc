#include <iostream>
#include <string>

using namespace std;

int main() {
  string s{};
  int count{};
  getline(cin, s, '.');
  
  for (char i : s) {
    if (i == 'a') count++;
  }
  cout << count << endl;
  return 0;
}