#include <iostream>
#include <vector>
#include <stack>

int main() {
	int N, val;
	std::stack <int> st;
	std::string command;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> command;

		if (command == "push") {
			std::cin >> val;
			st.push(val);
		}

		else if (command == "top") {
			if (!st.empty()) {
				std::cout << st.top() << std::endl;
			}
			else {
				std::cout << -1 << std::endl;
			}

		}

		else if (command == "size") {
			std::cout << st.size() << std::endl;
		}

		else if (command == "empty") {
			if (st.empty()) {
				std::cout << 1 << std::endl;
			}
			else {
				std::cout << 0 << std::endl;
			}
		}

		else if (command == "pop") {
			if (!st.empty()) {
				std::cout << st.top() << std::endl;
				st.pop();
			}
			else {
				std::cout << -1 << std::endl;
			}

		}

	}


	return 0;
}
