#include <iostream>
#define PRINT_ARR(A) for (auto i : A) cout << i << " "; cout << endl;
using namespace std;

void bubble_sort(auto A[], auto size) {
	for (auto i = 0; i < size-1; i++) {
		bool swap_made = false;
		for (auto j = 0; j < size-1; j++) {
			if (A[j] > A[j+1]) {
				swap(A[j], A[j+1]);
				swap_made = true;
			}
		}
		if (!swap_made) break;
	}
}

int main() {
	// int A[] = {12, -2, 3, 43, 3, 3, 10};
	int A[] = {6, 2, 3, 1, 4, 5, 8, 23, 2, -2, 0};
	int size = sizeof(A)/sizeof(A[0]);
	bubble_sort(A, size);

	PRINT_ARR(A);

	return 0;
}
