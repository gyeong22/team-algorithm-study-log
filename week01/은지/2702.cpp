#include <iostream>

int gcd(int a, int b) {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}

	return a;
}

int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;

		std::cout << lcm(a, b) << " " << gcd(a, b) << "\n";
	}

	return 0;
}
