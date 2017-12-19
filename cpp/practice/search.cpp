#include <iostream>
#include <algorithm>
using namespace std;

void binary_search(int A[], int size, int item) {
	bool found = false;

	int low = 0;
	int high = size - 1;

	while (low <= high) {
		int mid = (high + low)/2;
		if (A[mid] == item) {
			found = true;
			break;
		}
		else if (A[mid] < item) low = mid + 1;
		else high = mid - 1;
	}

	if (found) cout << item << " found in the given array. (binary search)" << endl;
	else cout << item << " not found in the given array. (binary search)" << endl;
}

void linear_search(int A[], int size, int item) {
	bool found = false;
	for (int i = 0; i < size; i++) {
		if (A[i] == item) {
			found = true;
			break;
		}
	}

	if (found) cout << item << " found in the given array. (linear search)" << endl;
	else cout << item << " not found in the given array. (linear search)" << endl;
}

int main() {
	int A[7] = {1, 4, 3, 2, -4, 2, 4};
	sort(A, A+7);

	binary_search(A, 7, 4);
	linear_search(A, 7, 4);

	binary_search(A, 7, -23);
	linear_search(A, 7, -23);

	return 0;
}
