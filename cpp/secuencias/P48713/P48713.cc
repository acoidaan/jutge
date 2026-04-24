// https://jutge.org/problems/P48713_en
#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int seq, x = 2;
    cin >> seq;
    cout << seq;
    bool prime = true;
    while ((x * x) <= seq && prime) {
      if (seq % x == 0) prime = false;
      ++x;
    }
    if (seq < 2) cout << " is not prime" << endl;
    else if (prime) cout << " is prime" << endl;
    else cout << " is not prime" << endl;
  }
  return 0;
}