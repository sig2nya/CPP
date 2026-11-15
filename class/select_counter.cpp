#include <vector>

using namespace std;

int solution(vector<int> endTimes, int arrival) {
	for (int i = 0; i < endTimes.size(); i++) {
		if (endTimes[i] <= arrival) {
			return i;
		}
	}

	int min_idx = 0;

	for (int i = 1; i < endTimes.size(); i++) {
		if (endTimes[i] < endTimes[min_idx]) {
			min_idx = i;
		}
	}

	return min_idx;
}
