#include <iostream>
using namespace std;

int main() {
  string s;
  bool pr = false;
  int c = 0;
  while (cin >>  s) {
    if (s == "end") {
      if (pr) cout << c << endl;
      else cout << "wrong sequence" << endl;
      return 1;
    }
    if (pr) c++;
    if (s == "beginning") pr = true;
  }
  cout << "wrong sequence" << endl;
}