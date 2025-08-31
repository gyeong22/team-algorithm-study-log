#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	for (int i = 0; i < str.size(); i++) {
		str[i] -= 3;

		if (str[i] < 'A') {
			str[i] += 26;
		}
	}

	std::cout << str;

	return 0;
}

// -------------------------------------------------------

#include <iostream>
#include <string>

int main() {
	std::string str;

	while (std::cin >> str) {
		for (std::size_t i = 0; i < str.size(); i++) {
			if ('A' <= str[i] && str[i] <= 'C') {
				std::cout << (char)('Z' - ('C' - str[i]));
			}
			else {
				std::cout << (char)(str[i] - 3);
			}
		}
		std::cout << "\n";
	}

	return 0;
}
