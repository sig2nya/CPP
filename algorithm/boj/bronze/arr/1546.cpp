#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	int max = 0;
	std::cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	max = *max_element(arr, arr + (sizeof(arr) / sizeof(arr[0])));
	cout << sum / max * 100 << endl;
}
