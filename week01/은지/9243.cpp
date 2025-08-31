#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	std::string str1, str2;
	std::cin >> str1 >> str2;

	if (n % 2 == 0) {
		for (int i = 0; i < str1.size(); i++) {
			if (str1[i] != str2[i]) {
				std::cout << "Deletion failed";
				return 0;
			}
		}
		std::cout << "Deletion succeeded";
	}
	else {
		for (int i = 0; i < str1.size(); i++) {
			if (str1[i] == str2[i]) {
				std::cout << "Deletion failed";
				return 0;
			}
		}
		std::cout << "Deletion succeeded";
	}

	return 0;
}
