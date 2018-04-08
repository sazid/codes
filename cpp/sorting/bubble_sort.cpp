#include <iostream>
using namespace std;

int main() {
	int arr[10] = {12, -43, 42, 95, 0, 4, 6, 90, 20, 34};

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}

	for (int i : arr) {
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}