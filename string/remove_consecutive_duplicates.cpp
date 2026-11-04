#include <string>

using namespace std;

string solution(string s) {
	string answer = "";
	answer += s[0];

	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i - 1]) answer += s[i];
	}

	return answer;
}
