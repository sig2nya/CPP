#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
	unordered_set<string> hash_map(phone_book.begin(), phone_book.end());

	for (const string& phone : phone_book) {
		string prefix = "";

		for (int i = 0; i < phone.length() - 1; i++) {
			prefix += phone[i];

			if (hash_map.contains(prefix)) {
				return false;
			}
		}
	}

	return true;
}
