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
			if (answer < number) answer = number;
			number = 0;
		}
	}

	if (answer < number) answer = number;

	return answer;
}
