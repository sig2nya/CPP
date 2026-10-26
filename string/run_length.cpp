#include <string>

using namespace std;

string solution(string my_string) {
	string answer = "";
	int count = 1;

	for (int i = 1; i < my_string.size(); i++) {
		if (my_string[i - 1] == my_string[i]) {
			count++;
		}
		else {
			answer += my_string[i - 1] + to_string(count);
			count = 1;
		}
	}

	answer += my_string[my_string.size() - 1] + to_string(count);

	return answer;
}
