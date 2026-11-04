#include <string>

using namespace std;

int solution(string s) {
	int answer = 0;
	int number = 0;

	for (const char& c : s) {
		if (c >= '0' && c <= '9') {
			number = number * 10 + (c - '0');
		}
		else {
			answer += number;
			number = 0;
		}
	}

	answer += number;

	return answer;
}
