#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<char> s;
  char c;
  while (cin >> c) {
    if (s.size() == 0 && c == ')') {
      s.push(c);
      break;
    }
    if (c == ')' && s.top() == '(') s.pop();
    else s.push(c);
  }
  if (s.size() != 0) cout << "no" << endl;
  else cout << "yes" << endl;
}

