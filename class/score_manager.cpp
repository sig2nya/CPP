#include <iostream>
#include <vector>

using namespace std;

class ScoreManager {
	private:
		vector<int> scores;

	public:
		void addScore(int score) {
			if (score > 100 || score < 0) return;
			scores.push_back(score);
		}

		int getTotal() {
			int total = 0;

			for (int score : scores) total += score;

			return total;
		}

		int getMax() {
			int max = 0;
			
			for (int score : scores) {
				if (max < score) max = score;
			}

			return max;
		}
};
