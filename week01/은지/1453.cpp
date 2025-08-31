#include <iostream>

int main() {
	int n;
	std::cin >> n;
	
	int cnt = 0;
	int arr[101] = {};

	for (int i = 0; i < n; i++) {
		int idx = 0;
		std::cin >> idx;

		if (arr[idx] == 0) {
			arr[idx]++;
		}
		else {
			cnt++;
		}
	}

	std::cout << cnt;

	return 0;;
}
