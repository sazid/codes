#include <iostream>
#include <vector>
using namespace std;

template <class T>
class merge_sort {
	typedef unsigned long long ll;
	vector<T> arr;
	vector<T> temp;

public:
	merge_sort(vector<T> &vec) {
		arr = vec;
		temp = vector<T>(vec.size());
	}

	vector<T> sort() {
		ll left_start = 0;
		ll right_end = arr.size() - 1;
		sort(left_start, right_end);
		return arr;
	}

	void sort(ll left_start, ll right_end) {
		// if the array cannot be sub-divided any further, return
		if (left_start >= right_end) return;

		ll middle = (left_start + right_end) / 2;
		// sort the left sub-array
		sort(left_start, middle);
		// sort the right sub-array
		sort(middle + 1, right_end);
		// merge the left and right "sorted" sub-arrays
		merge(left_start, right_end);
	}

	void merge(ll left_start, ll right_end) {
		ll left_end = (left_start + right_end) / 2;
		ll right_start = left_end + 1;

		ll left = left_start;
		ll right = right_start;
		ll index = left;

		while (left <= left_end && right <= right_end) {
			if (arr[left] <= arr[right]) {
				temp[index] = arr[left++];
			} else {
				temp[index] = arr[right++];
			}
			index++;
		}

		printf("Left: %lld, Left end: %lld\n", left, left_end);
		printf("Right: %lld, Right end: %lld\n", right, right_end);

		while (left <= left_end) {
			temp[index++] = arr[left++];
		}

		while (right <= right_end) {
			temp[index++] = arr[right++];
		}

		arr = vector<T>(temp);
	}
};

int main() {
	vector<int> x = {5, 2, 1, 3, 4, 7, 6, 3};
	merge_sort<int> ms(x);
	for (int i: ms.sort()) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}