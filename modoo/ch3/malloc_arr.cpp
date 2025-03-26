#include <iostream>

using namespace std;

int main()
{
	int arr_size;
	int *list;

	cout << "Array size : ";
	cin >> arr_size;
	
	list = new int[arr_size];

	for (int i = 0; i < arr_size; i++) {
		cin >> list[i];
	}

	for (int i = 0; i < arr_size; i++) {
		cout << i << "th element of list : " << list[i] << endl;
	}

	delete[] list;
	return 0;
}
