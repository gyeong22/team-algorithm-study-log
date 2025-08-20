#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int N, M, cnt;
int total_cnt;
int check[501];
int visited_1[501];
int visited_2[501];
vector <int> v1[501];
vector <int> v2[501];


int main() {
	std::cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int from, to;
		std::cin >> from >> to;

		v1[from].push_back(to);
		v2[to].push_back(from);
	}


	// [1] 정방향 BFS
	for (int i = 1; i < N + 1; i++) {
		fill(visited_1, visited_1 + N + 1, 0);
		cnt = 0;

		queue <int> q;
		q.push(i);
		visited_1[i] = 1;

		while (!q.empty()) {
			int now = q.front();
			q.pop();

			for (int j = 0; j < v1[now].size(); j++) {
				int next = v1[now][j];
				if (visited_1[next]) {
					continue;
				}

				visited_1[next] = 1;
				cnt++;

				q.push(next);
			}
		}

		check[i] = cnt;
	}


	// [2] 역방향 BFS
	for (int i = 1; i < N + 1; i++) {
		fill(visited_2, visited_2 + N + 1, 0);
		cnt = 0;

		queue <int> q;
		q.push(i);
		visited_2[i] = 1;

		while (!q.empty()) {
			int now = q.front();
			q.pop();

			for (int j = 0; j < v2[now].size(); j++) {
				int next = v2[now][j];
				if (visited_2[next]) {
					continue;
				}

				visited_2[next] = 1;
				cnt++;

				q.push(next);
			}
		}

		check[i] += cnt;
	}

	for (int i = 1; i < N + 1; i++) {
		if (N - 1 == check[i]) {
			total_cnt++;
		}
	}

	std::cout << total_cnt;

	return 0;
}
