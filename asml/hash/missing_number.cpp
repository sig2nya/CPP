#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> before, vector<int> after) {
	int answer = 0;
	unordered_map<int, int> before_map;
	unordered_map<int, int> after_map;

	for (int num : before) {
		before_map[num]++;
	}

	for (int num : after) {
		after_map[num]++;
	}

	for (const auto& num : before_map) {
		if (num.second != after_map[num.first]) {
			answer = num.first;
			break;
		}
	}

	return answer;
}
