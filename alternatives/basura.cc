#include <iostream>

int main() {
    int n;
    double harmonic = 0.0;
    std::cin >> n;
    if (n <= 0) {
        std::cout << "0.0000" << std::endl;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        harmonic += 1.0 / i;
    }

    int temp = static_cast<int>(harmonic * 10000 + 0.5);
    harmonic = static_cast<double>(temp) / 10000;

    std::cout << harmonic << std::endl;

    return 0;
}

