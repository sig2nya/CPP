#include <iostream>

using namespace std;

int N, M;
int grid[100][100];
int visited[100][100];

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
			if (!visited[nx][ny] && grid[nx][ny] == 1) {
				dfs(nx, ny);
			}
		}
	}
}

int main() {
	return 0;
}
