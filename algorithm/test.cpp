#include <iostream>
#include <vector>

using namespace std;

int solveTrafficFilter(vector<int>& signals, int threshold) {
	if (signals.empty()) return 0;

	int writeIdx = 0;
	int n = signals.size();
	int i = 0;

	while (i < n) {
		int startIdx = i;

		while (i < n && signals[i] == signals[startIdx]) {
			i++;
		}

		int count = i - startIdx;

		if (count < threshold) {
			for (int j = startIdx; j < i; j++) {
				signals[writeIdx++] = signals[j];
			}
		}
	}

	return writeIdx;
}
