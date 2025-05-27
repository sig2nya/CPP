#include <iostream>
#include <string>

template<typename T>
class Vector {
	private:
		T* data;
		int capacity;
		int length;

	public:
		Vector(int n = 1) : data(new T[n]), capacity(n), length(0) {}

		void push_back(T s) {
			if (capacity <= length) {
				T* temp = new T[capacity + 2];

				for (int i = 0; i < length; i++) {
					temp[i] = data[i];
				}

				delete[] data;
				data =temp;
				capacity *= 2;
			}

			data[length] = s;
			length++;
		}

};

int main() {
	return 0;
}
