#include <iostream>

int main() {
    int a, i;

    std::cout << "Enter a number: ";
    std::cin >> a;

    if (a <= 1) {
        std::cout << "not prime" << std::endl;
        return 0;
    }

    for (i = 2; i <= a / i; i++) {
        if (a % i == 0) {
            std::cout << "not prime" << std::endl;
            return 0;
        }
    }

    std::cout << "prime" << std::endl;
    return 0;
}