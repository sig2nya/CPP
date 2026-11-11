#include <iostream>
#include <vector>

using namespace std;

int solution(int arrival, int end) {
	return arrival >= end ? arrival : end;
}
