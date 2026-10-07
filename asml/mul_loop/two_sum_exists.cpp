#include <vector>

using namespace std;

bool solution(vector<int> numbers, int target) {
	bool answer = false;

	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			if (numbers[i] + numbers[j] == target) {
				answer = true;
				return answer;
			}
		}
	}

	return answer;
}
