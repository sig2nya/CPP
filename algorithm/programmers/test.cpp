#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> strlist)
{
	vector<int> answer;

	for (int i = 0; i < strlist.size(); i++) {
		answer.push_back(strlist[i].length());
	}

	return answer;
}

int main()
{
	vector<string> strlist1 = { "We", "are", "the", "world!" };
	vector<string> strlist2 = { "I", "Love", "Programmers." };

	vector<int> result1 = solution(strlist1);
	vector<int> result2 = solution(strlist2);

	for (int len : result1) {
		cout << len << " ";
	}
	cout << endl;

	for (int len : result2) {
		cout << len << " ";
	}
	cout << endl;

	return 0;
}
