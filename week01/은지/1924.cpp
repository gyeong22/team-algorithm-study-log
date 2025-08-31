#include <iostream>
#include <string>

int main() {
	int x, y;
	int day = 0;
	std::cin >> x >> y;

	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	std::string month[8] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

	if (x == 1) {
		std::cout << month [(y - 1) % 7 ];
	}
	else {
		for (int i = 1; i < x; i++) {
			day += days[i];
		}
		day += y;
		std::cout << month[(day - 1) % 7 ];
	}

	return 0;
}
