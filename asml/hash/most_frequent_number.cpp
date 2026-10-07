#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> numbers) {
	int answer = numbers[0];
	int bestCount = 0;
	unordered_map<int, int> map;

	for (int num : numbers) map[num]++;

	for (const auto& num : map) {
		if (num.second > bestCount) {
			answer = num.first;
			bestCount = num.second;
		}
		else if (num.first < answer && num.second == bestCount) {
			answer = num.first;
		}
	}

	return answer;
}
