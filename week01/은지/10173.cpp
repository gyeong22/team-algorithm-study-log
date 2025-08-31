#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string str;

	while (std::getline(std::cin, str) && str != "EOI") {
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);

		if (str.find("NEMO") != std::string::npos) {
			std::cout << "Found \n";
		}
		else {
			std::cout << "Missing \n";
		}
	}

	return 0;
}

// -------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

int main() {
	std::string str;

	while (std::getline(std::cin, str)) {
		if (str == "EOI") {
			break;
		}

		for (int i = 0; i < str.size(); i++) {
			str[i] = toupper(str[i]);
		}

		if (str.find("NEMO") != std::string::npos) {
			std::cout << "Found \n";
		}
		else {
			std::cout << "Missing \n";
		}
	}

	return 0;
}
