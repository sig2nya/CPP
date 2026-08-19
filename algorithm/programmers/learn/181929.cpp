#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
	int answer = 0;
	int every_product = 1;
	int every_sums_sqrt = 0;

	for (int num : num_list) {
		every_product *= num;
		every_sums_sqrt += num;
	}

	if (every_product > every_sums_sqrt * every_sums_sqrt) {
		answer = 0;
	}
	else {
		answer = 1;
	}

	return answer;
}
