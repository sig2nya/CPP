#include <string>
#include <vector>

using namespace std;

#if 0
	if n == 4...
	[[ 1,  2,  3, 4],
	 [12, 13, 14, 5],
	 [11, 16, 15, 6],
	 [10,  9,  8, 7]
	]
#endif

vector<vector<int>> solution(int n) {
	vector<vector<int>> answer(n, vector<int>(n, 0));
	int dx[4] = { 1, 	0, -1,	 0 };
	int dy[4] = { 0, 	1,  0,	-1 };
	//			right, up, left, down

	int x = 0, y = 0, dir = 0;

	for (int i = 1; i <= n * n; i++) {
		answer[y][x] = i;

		int nx = x + dx[dir];
		int ny = y + dy[dir];

		if (nx < 0 || ny < 0 || nx >= n || ny >= n || answer[ny][nx] != 0) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
	}

	return answer;
}
