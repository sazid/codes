#include <iostream>
#define PRINT_ARR(A) for (auto i : A) cout << i << " "; cout << endl;
using namespace std;

void insertion_sort (auto A[], auto size) {
	for (auto i = 1; i < size; i++) {
		auto key = A[i];
		auto j = i - 1;

		while (j >= 0 && A[j] > key) {
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}

int main() {
	// int A[] = {12, -2, 3, 43, 3, 3, 10};
	int A[] = {6, 2, 3, 1, 4, 5, 8, 23, 2, -2, 0};
	int size = sizeof(A)/sizeof(A[0]);
	insertion_sort(A, size);

	PRINT_ARR(A);

	return 0;
}
