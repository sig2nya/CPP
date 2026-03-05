#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 10001;
vector<int> adj[MAX];
bool visited[MAX];

void dfs(int curr) {
	visited[curr] = true;
	cout << curr << " visited" << endl;

	for (int next : adj[curr]) {
		if (!visieted[next]) {
			dfs(next);
		}
	}
}

int main() {
	adj[1].push_back(2);
	adj[1].push_back(3);
	adj[2].push_back(4);
	adj[3].push_back(5);

	dfs(1);

	return 0;
}
