#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> numbers) {
	int answer = -1;
	unordered_map<int, int> map;

	for (int num : numbers) {
		if (map[num] >= 1) {
			answer = num;
			return answer;
		}

		map[num]++;
	}

	return answer;
}
