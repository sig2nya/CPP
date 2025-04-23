#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d) {
	int answer = 0;

	if (a == b == c == d) {
		answer = 1111 * a;
	}

	return answer;
}
