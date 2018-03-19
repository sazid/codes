#include <iostream>
#include <vector>
#include <algorithm>

int lower_bound(std::vector<int> v, int x) {
	int begin = 0;
	int end = v.size() - 1;
	int mid;

	while (begin <= end) {
		mid = begin + (end-begin)/2;

		if (x == v[mid]) end = mid - 1;
		else if (x < v[mid]) end = mid - 1;
		else begin = mid + 1;
	}

	return begin;
}

int main() {
	std::vector<int> v = {1, 2, 3, 1, 1, 2, 3, 5, 6, 4};
	std::sort(v.begin(), v.end());
	for(auto i : v) std::cout << i << ' '; std::cout << '\n';
	std::cout << lower_bound(v, 5) << std::endl;

	return 0;
}

