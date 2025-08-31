#include <iostream>

int main() {
	int T;
	std::cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b;
		std::cin >> a >> b;

		std::string str;
		std::cin >> str;

		for (int i = 0; i < str.size(); i++) {
			int num = a * (str[i] - 'A') + b;
			num = num % 26;
			
			std::cout << (char)('A' + num);
		}

		std::cout << "\n";
	}

	return 0;
}
