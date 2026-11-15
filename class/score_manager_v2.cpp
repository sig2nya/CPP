#include <iostream>
#include <vector>

using namespace std;

class ScoreManager {
	private:
		vector<int> scores;
		int total = 0;
		int maxScore = 0;

	public:
		void addScore(int score) {
			if (score > 100 || score < 0) return;
			if (maxScore < score) maxScore = score;
			scores.push_back(score);
			total += score;
		}

		int getTotal() {
			return total;
		}

		int getMax() {
			return maxScore;
		}
};
