#include <vector>

using namespace std;

int solution(vector<int> numbers, int target) {
	int answer = 0;

	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			if (numbers[i] + numbers[j] == target) answer++;
		}
	}

	return answer;
}
