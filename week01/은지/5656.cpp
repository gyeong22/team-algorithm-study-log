#include <iostream>

int main() {
	int a, b;
	int idx = 1;
	std::string op;

	std::cout << std::boolalpha;

	while (1) {
		std::cin >> a >> op >> b;
		
		if (op == "E") {
			break;
		}

		if (op == ">") {
			std::cout << "Case " << idx << ": " << (a > b) << "\n";
			idx++;
		}

		if (op == ">=") {
			std::cout << "Case " << idx << ": " << (a >= b) << "\n";
			idx++;
		}

		if (op == "<") {
			std::cout << "Case " << idx << ": " << (a < b) << "\n";
			idx++;
		}

		if (op == "<=") {
			std::cout << "Case " << idx << ": " << (a <= b) << "\n";
			idx++;
		}

		if (op == "==") {
			std::cout << "Case " << idx << ": " << (a == b) << "\n";
			idx++;
		}

		if (op == "!=") {
			std::cout << "Case " << idx << ": " << (a != b) << "\n";
			idx++;
		}
	}
	

	return 0;
}
