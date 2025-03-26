#include <iostream>

using namespace std;

typedef struct animal {
	char name[30];
	int age;

	int health;
	int food;
	int clean;
} animal;

void create_animal(animal *animal) {
	cout << "animal's name?";
	cin >> animal->name;

	cout << "animal's age?";
	cin >> animal->age;

	animal->health = 100;
	animal->food = 100;
	animal->clean = 100;
}

void play(animal *animal) {
	animal->health += 10;
	animal->food -= 20;
	animal->clean -= 30;
}

void one_day_pass(animal *animal) {
	animal->health -= 10;
	animal->food -= 30;
	animal->clean -= 20;
}

void show_stat(animal *animal) {
	cout << animal->name << "' Status" << endl;
	cout << "' health " << animal->health << endl;
	cout << "' food " << animal->food << endl;
	cout << "' clean " << animal->clean << endl;
}

int main()
{
	animal *list[10];
	int animal_num = 0;

	while (1) {
		int input;

		cout << "1. Add animal" << endl;
		cout << "2. Play" << endl;
		cout << "3. Show Stat" << endl;

		cin >> input;

		switch (input) {
			int play_with;
			case 1:
				list[animal_num] = new animal;
				create_animal(list[animal_num]);
				animal_num++;
				break;

			case 2:
				cout << "Play : ";
				cin >> play_with;

				if (play_with < animal_num) play(list[play_with]);
				break;

			case 3:
				cout << "Show Status : ";
				cin >> play_with;
				if (play_with < animal_num) show_stat(list[play_with]);
				break;
		}

		for (int i = 0; i != animal_num; i++) {
			one_day_pass(list[i]);
		}
	}

	for (int i = 0; i != animal_num; i++) {
		delete list[i];
	}
}
