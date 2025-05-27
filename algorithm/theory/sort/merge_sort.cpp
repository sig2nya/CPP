#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &vec, int left, int mid, int right) {
	vector<int> temp;
	int i = left;
	int j = mid + 1;

	while (i <= mid && j <= right) {
		if (vec[i] <= vec[j]) temp.push_back(vec[i++]);
		else temp.push_back(vec[j++]);
	}

	while (i <= mid) temp.push_back(vec[i++]);
	while (j <= right) temp.push_back(vec[j++]);

	for (size_t k = 0; k < temp.size(); k++) {
		vec[left +k] = temp[k];
	}
}

void mergeSort(vector<int> &vec, int left, int right) {
	if (left >= right) return;

	int mid = (left + right) / 2;
	mergeSort(vec, left, mid);
	mergeSort(vec, mid + 1, right);

	merge(vec, left, mid, right);
}

int main() {
	vector<int> vec = { 38, 27, 43, 3, 9, 82, 10 };
	mergeSort(vec, 0, vec.size() - 1);

	cout << "Sorted : ";
	for (int num : vec) cout << num << " ";
	cout << endl;

	return 0;
}
