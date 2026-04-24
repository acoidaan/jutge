#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
const double EPS = 10e-6;
using namespace std;

bool is_greater(const double max, const double number) {
  return ((max - number) > EPS);
}

int main() {
  int n{0}, m{0}, strings{0};
  cin >> n;
  while (strings < n) {
    cin >> m;
    strings++;
    vector<double> my_vec;
    while (my_vec.size() < m) {
      double numbers{0.0};
      cin >> numbers;
      my_vec.emplace_back(numbers);
    }
    double max = my_vec[0], min = my_vec[0], average = my_vec[0];
    for (int i = 1; i < my_vec.size(); i++) {
      if (is_greater(min, my_vec[i])) min = my_vec[i];
      else if (!is_greater(max, my_vec[i])) max = my_vec[i];
      average += my_vec[i];
    }
    cout << fixed << std::setprecision(4) << dec << min << " " << max << " " << average / m << endl;
  }
  return 0;
}