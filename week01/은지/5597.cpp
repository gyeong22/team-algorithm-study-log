#include <iostream>

int main() {
	int chk[31] = {};

	for (int i = 0; i < 28; i++) {
		int idx;
		std::cin >> idx;

		chk[idx]++;
	}

	for (int i = 1; i < 31; i++) {
		if (chk[i] == 0) {
			std::cout << i << "\n";
		}
	}

	return 0;
}
