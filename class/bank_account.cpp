#include <iostream>

using namespace std;

class BankAccount {
	private:
		int total = 0;

	public:
		void deposit(int amount) {
			if (amount <= 0) return;
			total += amount;
		}

		bool withdraw(int amount) {
			if (amount <= 0 || total < amount) {
				return false;
			}

			total -= amount;
			return true;
		}

		int getBalance() {
			return total;
		}
};
