#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1001;
vector<int> adj[MAX];
bool visited[MAX];

void dfs(int node) {
	visited[node] = true;
	cout << node << " ";

	for (int next : adj[node]) {
		if (!visited[next]) {
			dfs(next);
		}
	}
}

int main() {
	int n = 3;
	int m = 4;

	vector<pair<int, int>> edges = {
		{1, 2}, {1, 3}, {2, 4}, {3, 5}
	};

	/*
	 *		1
	 *	   / \
	 *	  2   3
	 *    |   |
	 *	  4   5
	 */

	for (auto [u, v] : edges) {
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	cout << "DFS Visited order : ";
	dfs(1);
	cout << endl;

	return 0;
}
