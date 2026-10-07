#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> a, vector<int> b) {
	vector<int> answer;
	unordered_map<int, int> a_map;
	unordered_map<int, int> b_map;

	for (int num : a) a_map[num]++;
	for (int num : b) b_map[num]++;

	for (const auto& num : a_map) {
		if (b_map[num.first]) answer.push_back(num.first);
	}

	sort(answer.begin(), answer.end());

	return answer;
}
