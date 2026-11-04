#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
	// vector<int> answer = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector<int> answer(26, 0);

	for (const char& c : s) {
		if (c >= 'a' && c <= 'z') answer[c - 'a']++;
		if (c >= 'A' && c <= 'Z') answer[c - 'A']++;
	}

	return answer;
}
