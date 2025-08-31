#include <iostream>
#include <vector>

int main() {
	int A, B;
	std::vector <std::pair<int, int>> v;

	while (std::cin >> A >> B) {
		std::cout << A - B;
	}
	return 0;
}
