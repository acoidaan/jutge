#include <iostream>
#include <string>

std::string day_of_the_week(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y--;
    }

    int c = y / 100;
    int a = y % 100;
    int mPrime = m - 2;

    int f = (d + static_cast<int>(2.6 * mPrime - 0.2) + a + a / 4 + c / 4 - 2 * c) % 7;

    if (f < 0) {
        f += 7;
    }

    std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return days[f];
}

int main() {
    int d, m, y;
    std::cout << "Enter day, month, and year: ";
    std::cin >> d >> m >> y;
    if (y >= 1800 && y <= 9999) {
        std::cout << "The day of the week is: " << day_of_the_week(d, m, y) << std::endl;
    } else {
        std::cout << "Invalid year. Year must be between 1800 and 9999." << std::endl;
        return 1;
    }
    return 0;
}

