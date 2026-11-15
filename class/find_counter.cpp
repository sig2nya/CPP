#include <vector>

using namespace std;

int solution(vector<int> endTimes) {
	int time = endTimes[0];
	int min_idx = 0;

	for (int i = 1; i < endTimes.size(); i++) {
		if (time > endTimes[i]) {
			time = endTimes[i];
			min_idx = i;
		}
	}

	return min_idx;
}
