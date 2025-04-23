#include <iostream>

class Marine {
	private:
		static int total_marine_nums;
		const static int i = 0;

		int hp;
		int coord_x, coord_y;
		bool is_dead;

		const int default_damage;
	
	public:
		Marine();
		Marine(int x, int y);
		Marine(int x, int y, int default_damage);

		~Marine() { total_marine_nums--; }

		int attack();
		Marine& be_attacked(int damage_earn);
		void move(int x, int y);

		void show_status();
		static void show_total_marine();
};

int Marine::total_marine_nums = 0;

Marine::Marine()
	: hp(50), coord_x(0), coord_y(0), is_dead(false), default_damage(5) {
		total_marine_nums++;
	}

Marine::Marine(int x, int y)
	: hp(50), coord_x(x), coord_y(y), is_dead(false), default_damage(5) {
		total_marine_nums++;
	}

Marine::Marine(int x, int y, int default_damage)
	: hp(50),
	  coord_x(x),
	  coord_y(y),
	  is_dead(false),
	  default_damage(default_damage) {
		total_marine_nums++;
	  }

void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}

int Marine::attack() {
	return default_damage;
}

Marine &Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;

	return *this;
}

void Marine::show_status() {
	std::cout << "*** Marine ***" << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
	std::cout << " Total Marine num : " << total_marine_nums << std::endl;
}

void Marine::show_total_marine() {
	std::cout << " Total Marine : " << total_marine_nums << std::endl;
}

int main() {
	Marine marine1(2, 3, 5);
	marine1.show_status();

	Marine marine2(3, 5, 10);
	marine2.show_status();

	std::cout << std::endl << "Marine1 Attacked Marine2 2 times" << std::endl;
	marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());

	marine1.show_status();
	marine2.show_status();

	return 0;
}
