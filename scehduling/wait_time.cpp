#include <iostream>
#include <algorithm>

using namespace std;

int solution(int arrival, int end) {
	int start = arrival >= end ? arrival : end;
	return start - arrival;
}
