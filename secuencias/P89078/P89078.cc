// https://jutge.org/problems/P89078_en
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers;
  int num;
  while (cin >> num && num >= 0) {
    numbers.emplace_back(num);
  }
  int pos{1};
  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] % 2 == 0) {
      cout << pos << endl;
      break;
    } else {
      pos++;
    }
  }
  return 0;
}