#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int T;
	std::cin >> T;

	for (int i = 1; i < T + 1; i++) {
		int N;
		std::cin >> N; 

		vector<int> v(N);

		for (int j = 0; j < N; j++) {
			std::cin >> v[j];
		}

		sort(v.rbegin(), v.rend());

		for (int j = 1; j < N; j++) {
			v[j] = v[0] - v[j];
		}

		int odd  = 0;
		int even = 0;
		for (int j = 1; j < N; j++) {
			// 홀수 개수
			odd  += v[j] % 2;
			// 짝수 개수
			even += v[j] / 2;
		}

		if (odd < even) {
			int num = even - odd;
			int set = num / 3;
			int remain_even = num % 3;

			if (remain_even == 0) {
				std::cout << "#" << i << " " << odd * 2 + set * 4 << "\n";
			}
			else if (remain_even == 1) {
				std::cout << "#" << i << " " << odd * 2 + set * 4 + 2 << "\n";
			}
			else if (remain_even == 2) {
				std::cout << "#" << i << " " << odd * 2 + set * 4 + 3 << "\n";
			}
		}
		else if (odd == even) {
			std::cout << "#" << i << " " << odd + even << "\n";
		}
		else if (odd > even) {
			int num = odd - even;
			std::cout << "#" << i << " " << even * 2 + num * 2 - 1 << '\n';
		}
	}

	return 0;

}
