#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
  string input, target = "hello";
  size_t target_index = 0;
  bool found = false;
  getline(cin, input, '.');

  for (char c : input) {
    if (c == target[target_index]) {
      target_index++;
      if (target_index == target.length()) {
        found = true;
        break;
      }
    } else {
      target_index = (c == target[0]) ? 1 : 0;
    }
  }

  cout << (found ? "hello" : "bye") << endl;

  return 0;
}