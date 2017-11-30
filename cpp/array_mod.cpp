#include <iostream>
using namespace std;

void print_arr(int arr[10]) {
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[10] = {10, 15, 20};
	int n = 3; // no of elements in the array
	int k = 2; // index of last element

	print_arr(arr);

	// insert beginning
	for (int i = k+1; i > 0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = 5;
	n++;
	k++;

	// insert middle, at index 2
	for (int i = k+1; i > 2; i--) {
		arr[i] = arr[i-1];
	}
	arr[2] = 55;
	n++;
	k++;

	// inesrt at the end
	arr[k+1] = 100;
	k++;
	n++;

	print_arr(arr);
	return 0;
}
