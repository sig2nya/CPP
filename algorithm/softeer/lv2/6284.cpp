#include <iostream>

using namespace std;

const long long MOD = 1000000007;

long long fast_pow(long long base, long long exp) {
	long long result = 1;
	base %= MOD;

	while (exp > 0) {
		if (exp % 2 == 1) {
			result = (result * base) % MOD;
		}

		base = (base * base) % MOD;
		exp /= 2;
	}

	return result;
}

int main() {
	long long k, p, n;
	long long result;
	cin >> k >> p >> n;

	result = (k % MOD) * fast_pow(p, n) % MOD;
	cout << result << endl;

	return 0;
}
