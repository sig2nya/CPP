#include <iostream>

class Animal {
//	private: 생략가능, Basic Keyword : private
	int food;
	int weight;

	public:
		void set_animal(int _food, int _weight) {
			food = _food;
			weight = _weight;
		}

		void increase_food(int inc) {
			food += inc;
			weight += (inc / 3);
		}

		void show_stat() {
			std::cout << "This Animal Food : " << food << std::endl;
			std::cout << "This Animal Weight : " << weight << std::endl;
		}
};

int main() {
	Animal animal;
	animal.set_animal(100, 50);
	animal.increase_food(30);

	animal.show_stat();
	return 0;
}
