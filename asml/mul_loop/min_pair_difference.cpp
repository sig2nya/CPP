#include <vector>
#include <cstdlib>

using namespace std;

int solution(vector<int> numbers) {
	int answer = abs(numbers[0] - numbers[1]);

	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			if (answer > abs(numbers[i] - numbers[j])) answer = abs(numbers[i] - numbers[j]);
		}
	}

	return answer;
}
