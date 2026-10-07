#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	unordered_map<int, int> map;

	for (int num : numbers) {
		if (map[num] >= 1) continue;
		map[num]++;
		answer.push_back(num);
	}

	return answer;
}
