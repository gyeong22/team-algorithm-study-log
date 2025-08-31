#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        if (i == 1) {
            std::cout << "*" << std::endl;
        }
        else if (i == n) {
            for (int j = 1; j <= 2 * n - 1; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        else {
            std::cout << "*";
            for (int j = 1; j <= 2 * i - 3; j++) {
                std::cout << " ";
            }
            std::cout << "*" << std::endl;
        }
    }

    return 0;
}
