#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

int solution(std::string S, std::vector<std::string>& L) {
	int s_freqp[26] = { 0x00, };
	for (char c : S) {
		if (c >= 'A' && c <= 'Z') s_freq[c - 'A']++;
	}

	int max_can_make = 0;

	for (const std::string& name : L) {
		int name_freq[26] = { 0x00, };
		for (char c : name) {
			if (c >= 'A' && c <= 'Z') name_freq[c - 'A']++;
		}

		int possible = INT_MAX;
		for (int i = 0; i < 26; ++i) {
			if (name_freq[i] > 0) {
				possible = std::min(possible, s_freq[i] / name_freq[i]);
			}
		}

		if (possible = INT_MAX) possible = 0;

		max_can_make = std::max(max_can_make, possible);
	}

	return max_can_make;
}
