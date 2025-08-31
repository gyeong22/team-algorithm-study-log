#include <iostream>

int main() {
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < 4; i++) {
		int num;
		std::cin >> num;

		sum1 += num;
	}

	for (int i = 0; i < 4; i++) {
		int num;
		std::cin >> num;

		sum2 += num;
	}

	std::cout << std::max(sum1, sum2);

	return 0;
}
