#include <iostream>
#include <string>
#include <cctype>

string solution(string myString) {
	string answer = "";

	for (char &c : myString) {
		answer += std::toupper(c);
	}

	return answer;
}
