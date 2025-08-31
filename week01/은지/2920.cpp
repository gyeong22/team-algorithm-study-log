#include <iostream>
#include <string>

int main() {
	std::string str;

	while (std::getline(std::cin, str)) {
		if (str == "1 2 3 4 5 6 7 8") {
			std::cout << "ascending" << "\n";
		}

		else if (str == "8 7 6 5 4 3 2 1") {
			std::cout << "descending" << "\n";
		}
		else {
			std::cout << "mixed" << "\n";
		}
	}

	return 0;
}
