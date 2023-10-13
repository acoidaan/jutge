#include <iostream>

int main() {
    int num1{};
    int num2{};
    std::cin >> num1 >> num2;

    if (num1 <= num2) {
        std::cout << num1;
        for (int i = num1 + 1; i <= num2; i++) {
            std::cout << "," << i;
        }
    }
    std::cout << std::endl;

    return 0;
}

