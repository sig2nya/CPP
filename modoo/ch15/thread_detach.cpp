#include <iostream>
#include <thread>

using std::thread;

void func1() {
	for (int i = 0; i < 10; i++) {
		std::cout << "Thread1 is running... \n";
	}
}

void func2() {
	for (int i = 0; i < 10; i++) {
		std::cout << "Thread2 is running... \n";
	}
}

void func3() {
	for (int i = 0; i < 10; i++) {
		std::cout << "Thread3 is running... \n";
	}
}

int main() {
	thread t1(func1);
	thread t2(func2);
	thread t3(func3);

	t1.detach();
	t2.detach();
	t3.detach();

	std::cout << "Main is terminated \n";

	return 0;
}
