#include <string>

using namespace std;

string solution(string s) {
	string answer = "";
	int count = 1;

	for (int i = 1; i < s.size(); i++) {
		if (s[i - 1] == s[i]) {
			count++;
		}
		else {
			answer += s[i - 1];
			answer += to_string(count);
			count = 1;
		}
	}

	answer += s.back();
	answer += to_string(count);

	return answer;
}
