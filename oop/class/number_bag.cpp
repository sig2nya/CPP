#include <unordered_map>

using namespace std;

class NumberBag {
	private:
		unordered_map<int, int> counts;
		int total = 0;

	public:
		void add(int number) {
			counts[number]++;
			total++;
		}

		bool remove(int number) {
			if (counts[number] == 0) return false;
			counts[number]--;
			total--;
			return true;
		}

		int getCount(int number) {
			return counts[number];
		}

		int getTotal() {
			return total;
		}
};
