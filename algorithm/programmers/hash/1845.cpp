#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int solution(vector<int> nums) {
	int max = nums.size() / 2;
	unordered_set<int> pokemon_types(nums.begin(), nums.end());
	int unique_types = pokemon_types.size();

	return min(max, unique_types);
}
