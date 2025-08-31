#include <iostream>
#include <deque>

int main() {
	int N, val;
	std::deque <int> dq;
	std::string command;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> command;

		if (command == "push_front") {
			std::cin >> val;
			dq.push_front(val);
		}

		else if (command == "push_back") {
			std::cin >> val;
			dq.push_back(val);
		}

		else if (command == "front") {
			if (!dq.empty()) {
				std::cout << dq.front() << std::endl;
			}
			else {
				std::cout << -1 << std::endl;
			}

		}

		else if (command == "back") {
			if (!dq.empty()) {
				std::cout << dq.back() << std::endl;
			}
			else {
				std::cout << -1 << std::endl;
			}

		}

		else if (command == "size") {
			std::cout << dq.size() << std::endl;
		}

		else if (command == "empty") {
			if (dq.empty()) {
				std::cout << 1 << std::endl;
			}
			else {
				std::cout << 0 << std::endl;
			}
		}

		else if (command == "pop_front") {
			if (!dq.empty()) {
				std::cout << dq.front() << std::endl;
				dq.pop_front();
			}
			else {
				std::cout << -1 << std::endl;
			}
		}

		else if (command == "pop_back") {
			if (!dq.empty()) {
				std::cout << dq.back() << std::endl;
				dq.pop_back();
			}
			else {
				std::cout << -1 << std::endl;
			}
		}

	}

	return 0;
}
