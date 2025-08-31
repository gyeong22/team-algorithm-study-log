#include <iostream>
#include <vector>
#include <algorithm>

bool compare(const std::pair<int, int>&a, const std::pair<int,int>&b) {
	if (a.second != b.second) {
		return a.second < b.second;
	}
	
	else {
		return a.first < b.first;
	}
}

int main() {
	int N, x, y;
	std::cin >> N;

	std::vector <std::pair<int, int>> v;

	for (int i = 0; i < N; i++) {
		std::cin >> x >> y;
		v.push_back({ x, y });
	}

	std::sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		std::cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
