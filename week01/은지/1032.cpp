#include <iostream>
#include <vector>
#include <string>

int main() {
	int n;
	int cnt = 1;
	std::cin >> n;

	std::vector <std::string> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	for (int i = 0; i < v[0].size(); i++) {
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (v[j - 1][i] == v[j][i]) {
				cnt++;
			}
		}

		if (cnt == n) {
			std::cout << v[0][i];	
		}
		else {
			std::cout << '?';
		}
	}

	return 0;
}
