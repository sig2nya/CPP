#include <string>
#include <vector>

using namespace std;

struct Result {
	vector<int> counts;
	string converted;
};

Result solution(string s) {
	Result answer;
	answer.counts = { 0, 0, 0 };

	for (const char& c : s) {
		if (c >= 'A' && c <= 'Z') {
			answer.counts[0]++;
			answer.converted += c + ('a' - 'A');
		}
		else if (c >= 'a' && c <= 'z') {
			answer.counts[1]++;
			answer.converted += c - ('a' - 'A');
		}
		else if (c >= '0' && c <= '9') {
			answer.counts[2]++;
			answer.converted += c;
		}
	}

	return answer;
}
