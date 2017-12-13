#include <iostream>
using namespace std;

template <class T>
void SWAP(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template <class T>
void print_array(T A[], int size) {
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

template <class T>
void bubble_sort(T A[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-1; j++) {
			if (A[j] > A[j+1]) {
				SWAP(A[j], A[j+1]);
			}
		}
	}
}


int main() {
	int x[] = {9, 2, 1, 5, 1, 1, 3, 4, -1, -5, -1, 2};
	bubble_sort(x, 10);
	print_array(x, 10);

	return 0;
}
