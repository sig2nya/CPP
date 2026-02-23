#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(vector<int>& arr, int left, int right) {
	if (left >= right) return;

	int mid = left + (right - left) / 2;
	int pivot = arr[mid];

	int i = left;
	int j = right;

	while (i <= j) {
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;

		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}

	quickSort(arr, left, j);
	quickSort(arr, i,    right);
}
