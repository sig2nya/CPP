#include <iostream>
#include <string>

using namespace std;

enum Status {
	NONE		= 0,
	POISON		= 1 << 0,
	BURN		= 1 << 1,
	PARALYSIS   = 1 << 2,
	STUN		= 1 << 3,
	SILENCE		= 1 << 4,
	GUARD		= 1 << 5,
	BERSERK		= 1 << 6
};

class Character {
	private:
		string name;
		int hp;
		int maxHp;
		int status;

	public:
		Character(string name, int hp) : name(name), hp(hp), maxHp(hp), status(NONE) {}

		void AddStatus(Status newStatus) {
			status |= newStatus;
		}

		void RemoveStatus(Status targetStatus) {
			status &= ~targetStatus;
		}

		bool HasStatus(Status targetStatus) {
			return (status & targetStatus) != 0;
		}

		void ClearStatus() {
			status = NONE;
		}
};
