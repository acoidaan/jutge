// https://jutge.org/problems/P75149_en
#include <iostream>
using namespace std;

int main() {
  string phrase;
  getline(cin, phrase);
  bool found_a = false;
  for (int i = 0; i < phrase.size() && phrase[i] != '.'; i++) {
    if (phrase[i] == 'a') {
      found_a = true;
      break;
    }
  }
  string result = (found_a) ? "yes" : "no";
  cout << result << endl;
  return 0;
}