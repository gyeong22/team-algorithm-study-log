#include <iostream>
#include <vector>

int main() {
	std::vector <std::pair<int, int>> v;
	int x, y;

	while (std::cin >> x >> y) {
		std::cout << x + y;
	}

	return 0;
}
