#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
	string answer = "";
	vector<bool> isSkipped(26, false);

	for (char c : skip) {
		isSkipped[c - 'a'] = true;
	}

	string validAlphabet = "";
	for (char c = 'a'; c <= 'z'; ++c) {
	}
	return answer;
}
