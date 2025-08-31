#include <iostream>
#include <string>

int main() {
	std::string str;
	int no = 0;

	for (int i = 1; i < 5 + 1; i++) {
		std::cin >> str;

		if (str.find("FBI") != std::string::npos) {
			std::cout << i << "\n";
		}
		else {
			no++;
		}
	}

	if (no == 5) {
		std::cout << "HE GOT AWAY!";
	}

	return 0;
}
