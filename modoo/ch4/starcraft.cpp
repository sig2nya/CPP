#include <iostream>
#include <cstring>

class Marine {
	private:
		int hp;
		int coord_x, coord_y;
		int damage;
		bool is_dead;

		char *name;

	public:
		Marine();
		Marine(int x, int y);

		Marine(int x, int y, const char *marine_name);
		~Marine();

		int attack();
		void be_attacked(int damage_earn);
		void move(int x, int y);

		void show_status();
};

Marine::Marine() {
	hp = 50;
	coord_x = coord_y = 5;
	damage = 5;
	is_dead = false;

	name = NULL;
}

Marine::Marine(int x, int y) {
	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
}

Marine::Marine(int x, int y, const char *marine_name) {
	name = new char[strlen(marine_name) + 1]; // 동적할당. Delete(Free) 시켜야함
	strcpy(name, marine_name);

	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
}

Marine::~Marine() {
	std::cout << name << " Destructor" << std::endl;
	if (name != NULL) {
		delete[] name;
	}
}

void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}

int Marine::attack() {
	return damage;
}

void Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;
}

void Marine::show_status() {
	std::cout << " *** Marine *** " << std::endl;
	std::cout << " Location [ " << coord_x << ", " << coord_y << " ] " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}

int main() {

	Marine* marines[100];

	marines[0] = new Marine(2, 3);
	marines[1] = new Marine(3, 5);

	marines[0]->show_status();
	marines[1]->show_status();

	std::cout << std::endl << "Marine1 Attack Marine2" << std::endl;

	marines[0]->be_attacked(marines[1]->attack());

	marines[0]->show_status();
	marines[1]->show_status();

	delete marines[0];
	delete marines[1];
	return 0;
}
