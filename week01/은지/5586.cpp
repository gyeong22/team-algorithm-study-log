#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	int joi = 0, ioi = 0;

	for (int i = 0; i <= str.size() - 3; i++) {
		std::string sub = str.substr(i, 3);

		if (sub == "JOI") {
			joi++;
		}

		if (sub == "IOI") {
			ioi++;
		}
	}

	std::cout << joi << "\n";
	std::cout << ioi;

	return 0;
}
