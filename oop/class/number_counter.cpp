#include <unordered_map>

using namespace std;

class NumberCounter {
	private:
		unordered_map<int, int> counts;
		int total = 0;

	public:
		void add(int number) {
			counts[number]++;
			total++;
			return;
		}

		int getCount(int number) {
			return counts[number];
		}

		int getTotal() {
			return total;
		}
};
