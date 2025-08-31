#include <iostream>
#include <string>

int main() {
	int D, M;
	int day = 0;
	std::cin >> D >> M;

	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	std::string date[7] = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };

	if (M == 1) {
		std::cout << date[(D - 1) % 7];
	}
	else {
		for (int i = 1; i < M; i++) {
			day += days[i];
		}
		day += D;
		std::cout << date[(day - 1) % 7];
	}
    
	return 0;
}
