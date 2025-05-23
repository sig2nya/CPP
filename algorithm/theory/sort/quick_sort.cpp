#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& arr, int left, int right) {
	if (left >= right) return;

	int pivot = arr[(left + right) / 2];
	int i = left, j = right;

	while (i <= j) {
		// if arr[i] is smaller than pivot, skip. if bigger than pivot, stop idx
		while (arr[i] < pivot) i++;
		// if arr[i] is bigger than pivot, skip. if smaller than pivot, stop idx
		while (arr[j] > pivot) j--;

		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}

	quickSort(arr, left, j);
	quickSort(arr, i, right);
}

int main() {
	return 0;
}
