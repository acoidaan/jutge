#include <iostream>
#include <vector>

std::vector<int> getDivisors(int n) {
    std::vector<int> divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.emplace_back(i);
        }
    }
    return divisors;
}

int sum_divisors(int x) {
    std::vector<int> divisors = getDivisors(x);
    int sum = 0;
    for (int divisor : divisors) {
        sum += divisor;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = sum_divisors(n);
    std::cout << "The sum of the divisors of " << n << " is: " << result << std::endl;
    return 0;
}
