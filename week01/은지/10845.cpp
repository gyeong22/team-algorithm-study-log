#include <iostream>
#include <queue>

int main() {
	int N, val;
	std::queue <int> q;
	std::string command;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> command;

		if (command == "push") {
			std::cin >> val;
			q.push(val);
		}

		else if (command == "front") {
			if (!q.empty()) {
				std::cout << q.front() << std::endl;
			}
			else {
				std::cout << -1 << std::endl;
			}

		}

		else if (command == "back") {
			if (!q.empty()) {
				std::cout << q.back() << std::endl;
			}
			else {
				std::cout << -1 << std::endl;
			}

		}

		else if (command == "size") {
			std::cout << q.size() << std::endl;
		}

		else if (command == "empty") {
			if (q.empty()) {
				std::cout << 1 << std::endl;
			}
			else {
				std::cout << 0 << std::endl;
			}
		}

		else if (command == "pop") {
			if (!q.empty()) {
				std::cout << q.front() << std::endl;
				q.pop();
			}
			else {
				std::cout << -1 << std::endl;
			}

		}

	}


	return 0;
}
