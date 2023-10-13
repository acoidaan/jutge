#include <iostream>
#include <string>

int main() {
    int num;
    std::cin >> num;

    if (num == 0) {
        std::cout << "00" << std::endl;
    } else {
        std::string hex;
        while (num > 0) {
            int remainder = num % 16;
            if (remainder < 10) {
                hex = char('0' + remainder) + hex;
            } else {
                hex = char('A' + remainder - 10) + hex;
            }
            num /= 16;
        }

        // Invertir la representación hexadecimal
        std::string reversedHex;
        for (int i = hex.size() - 1; i >= 0; --i) {
            reversedHex += hex[i];
        }
        std::cout << reversedHex << std::endl;
    }

    return 0;
}

