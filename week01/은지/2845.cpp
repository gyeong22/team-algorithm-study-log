#include <iostream>

int main() {
	int L, P;
	std::cin >> L >> P;

	int value = L * P;
	int arr[5] = {};

	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] - value << " ";
	}

	return 0;
}
