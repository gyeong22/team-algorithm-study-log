#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int arr[10] = {};
		int num = 0;

		std::string str;
		std::cin >> str;

		for (int i = 0; i < str.size(); i++) {
			num = str[i] - '0';
			arr[num]++;

		}

		int cnt = 0;
		for (int i = 0; i < 10; i++) {
			if (arr[i] > 0) {
				cnt++;
			}
		}

		std::cout << cnt << "\n";
	}
		
	return 0;
}
