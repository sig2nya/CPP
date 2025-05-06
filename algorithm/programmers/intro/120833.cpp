#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
	vector<int> answer;

	for (int i = num1 ; i <= num2; i++) {
		answer.push_back(numbers[i]);
	}

	return answer;
}

int main() {
	vector<int> test = { 1, 2, 3, 4, 5 };
	vector<int> answer = solution(test, 1, 3);

	for (vector<int>::iterator it = answer.begin(); it != answer.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}
