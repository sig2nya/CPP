#include <iostream>

using namespace std;

class ServiceCounter {
	private:
		int endTime = 0;

	public:
		int serve(int arrival, int duration) {
			if (arrival >= endTime) {
				endTime = arrival + duration;
			}
			else {
				endTime = endTime + duration;
			}

			return endTime;
		}

		int getEndTime() {
			return endTime;
		}
};
