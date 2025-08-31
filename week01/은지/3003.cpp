#include <iostream>

int main() {
	int chess[6] = {1, 1, 2, 2, 2, 8};
	int user[6]  = {};
	int need = 0;

	for (int i = 0; i < 6; i++) {
		std::cin >> user[i];
	}

	for (int i = 0; i < 6; i++) {
		need = chess[i] - user[i];

		std::cout << need << " ";
	}

	return 0;
}
