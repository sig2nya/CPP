#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string new_id) {
	// step 1
	for (char &c : new_id) {
		c = tolower(c);
	}

	string step2 = "";
	for (const char& c : new_id) {
		if (islower(c) || isdigit(c) || c == '-' || c == '_' || c == ',') {
		}
	}
}
