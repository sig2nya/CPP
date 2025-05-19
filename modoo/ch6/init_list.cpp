#include <iostream>
#include <string>

using namespace std;

class Point {
	private:
		int x, y;

	public:
		Point(int _x, int _y) : x(_x), y(_y) { }

		void print() {
			cout << x << ", " << y << endl;
		}
};

class User {
	private:
		string name;
		int age;

	public:
		User() : name("Unknown"), age(0) { }

		User(string n, int a) : name(n), age(a) { }
};

class Config {
	private:
		const int maxValue;

	public:
		Config(int v) : maxValue(v) { }
};

class Wrapper {
	private:
		int& ref;

	public:
		Wrapper(int &r) : ref(r) { }
};

class Engine {
	public:
		Engine(int power) {
			cout << "Engine created with " << power << " HP" << endl;
		}
};

class Car {
	private:
		Engine engine;

	public:
		Car(int power) : engine(power) {
			cout << "Car constructed\n";
		}
};

class Person {
	private:
		string name;
		int age;
		bool isActive;

	public:
		Person(string n, int a, bool active) : name(n), age(a), isActive(active) { }
};

class ClassName {
	private:
		int member1, member2;

	public:
		ClassName(int a, int b) : member1(a), member2(b) { }
};

int main () {
	return 0;
}
