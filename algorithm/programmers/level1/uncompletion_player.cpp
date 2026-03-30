#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	unordered_map<string, int> um;

	for (const string& player : participant) {
		um[player]++;
	}

	for (const string& player : completion) {
		um[player]--;
	}

	for (const auto& pair : um) {
		if (pair.second > 0) {
			return pair.first;
		}
	}

	return "";
}
