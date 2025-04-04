#include <string.h>
#include <iostream>

class Photon_Cannon {
	private:
		int hp, shield;
		int coord_x, coord_y;
		int damage;

	public:
		Photon_Cannon(int x, int y);
		Photon_Cannon(const Photon_Cannon &pc);

		void show_status();
};

Photon_Cannon::Photon_Cannon(const Photon_Cannon &pc) {
	std::cout << "Copy Constructor." << std::endl;
	hp = pc.hp;
	shield = pc.shield;

	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;
}
