#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
	vector<int> answer = { 0, 0, 0, 0 };

	for (const char& c : my_string) {
		if (c >= 'A' && c <= 'Z') answer[0]++;
		else if (c >= 'a' && c <= 'z') answer[1]++;
		else if (c >= '0' && c <= '9') answer[2]++;
		else if (c == ' ') answer[3]++;
	}

	return answer;
}
