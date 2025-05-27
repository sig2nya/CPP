#include <iostream>

int main() {
	int dx[4] = { -1, 1,  0, 0 }; // up, down, left, right
	int dy[4] = {  0, 0, -1, 1 };

	const int n = 5;

	int map[n][n] = {
		{ 1, 0, 0, 1, 1	},
		{ 1, 1, 0, 0, 0	},
		{ 0, 0, 1, 1, 1	},
		{ 0, 1, 1, 0, 0	},
		{ 1, 0, 0, 1, 1	}
	};

	bool visited[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && !visited[i][j]) {
				visited[i][j] = true;

				for (int d = 0; d < 4; d++) {
					int nx = i + dx[d];
					int ny = j + dy[d];

					if (0 <= nx && nx < n && 0 <= ny && ny < n) {
						if (map[nx][ny] == 1 && !visited[nx][ny]) {
							visited[nx][ny] = true;
						}
					}
				}
			}
		}
	}
}
