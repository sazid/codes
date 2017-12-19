#include <iostream>
#define PRINT_ARR(A) for (auto i : A) cout << i << " "; cout << endl;
using namespace std;

void insertion_sort (auto A[], auto size) {
	for (auto i = 0; i < size-1; i++) {
		auto mx = i;
		for (auto j = i+1; j < size; j++) {
			if (A[mx] <= A[j]) mx = j;
		}
		swap(A[i], A[mx]);
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
