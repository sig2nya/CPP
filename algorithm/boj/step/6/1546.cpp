#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> scores(n);
	int max_score = 0;

	for (int i = 0; i < n; i++) {
		cin >> scores[i];
		if (scores[i] > max_score) {
			max_score = scores[i];
		}
	}

	float sum = 0.0;
	for (int score : scores) {
		sum += (float) score / max_score * 100;
	}

	float avg = sum / scores.size();
	cout << avt << endl;

	return 0;
}
