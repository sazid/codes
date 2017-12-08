// heap is a kind of binary tree but with its own properties
// heap must be complete binary tree
// index: 	left child: 	2i + 1
// 		  	right child:	2i + 2
// values are inserted from left to right

#include <iostream>
#define NUM 10
using namespace std;

void max_heapify(int A[], int i, int n) {
	int LEFT_CHILD = 2*i + 1;
	int RIGHT_CHILD = 2*i + 2;
	int largest_index = i;
	if (LEFT_CHILD < n && A[LEFT_CHILD] > A[i]) {
		largest_index = i;
	}

	if (RIGHT_CHILD < n && A[RIGHT_CHILD] > A[largest_index]) {
		largest_index = RIGHT_CHILD;
	}

	if (largest_index != i) {
		swap(A[i], A[largest_index]);
		max_heapify(A, largest_index, n);
	}
}

int main() {
	int heap[NUM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	max_heapify(heap, 0, 9);
	for (int i : heap) cout << i << " ";
	cout << endl;
	return 0;
}
