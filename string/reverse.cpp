#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
	string answer = "";

	for (int i = my_string.size() - 1; i >= 0; i--) {
		if (my_string[i] == letter[0]) continue;
		answer += my_string[i];
	}

	return answer;
}
