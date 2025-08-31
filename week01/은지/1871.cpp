#include <iostream>
#include <string>
#include <cmath>


int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::string str;
		std::cin >> str;

		std::string L = str.substr(0, str.find("-"));
		int D = stoi(str.substr(str.find("-") + 1));

		int sum = 0;
		for (int i = 0; i < 3; i++) {
			sum += (L[i] - 65) * pow(26, 2-i);
		}

		if (abs(sum - D) <= 100) {
			std::cout << "nice" << "\n";
		}
		else {
			std::cout << "not nice" << "\n";
		}
	}

	return 0;
}
