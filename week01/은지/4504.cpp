#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int num;
	while (std::cin >> num) {
		if (num == 0) {
			return 0;
		}

		if (num % n == 0) {
			std::cout << num << " is a multiple of " << n << ".\n";
		}
		else {
			std::cout << num << " is NOT a multiple of " << n << ".\n";
		}
	}
}
