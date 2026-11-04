#include <string>

using namespace std;

int solution(string s) {
	int answer = 0;

	for (const char& c : s) {
		if (c >= '0' && c <= '9') {
			answer += c - '0';
		}
	}

	return answer;
}
