#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
https://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order

Algorithm:
1. Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
2. Find the largest index l greater than k such that a[k] < a[l].
3. Swap the value of a[k] with that of a[l].
4. Reverse the sequence from a[k + 1] up to and including the final element a[n].
*/

template <typename T>
bool nextPermutation(std::vector<T> &vec) {
	if (vec.empty())
		return false;

	typename std::vector<T>::iterator k = vec.end()-1, b = vec.begin();
	while (k > b && *(k-1) >= *k)
		--k;

	if (k == b)
		return false;
	
	typename std::vector<T>::iterator l = vec.end()-1;
	while (*l <= *(k-1))
		--l;
	
	std::iter_swap(k-1, l);

	std::reverse(k, vec.end());

	return true;
}

template <typename T>
void print_vec(std::vector<T> &vec) {
	typename std::vector<T>::iterator i = vec.begin(), e = vec.end();
	for (; i < e; ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
}

int main() {
	std::vector<int> vec = {1, 2, 3, 4};
	do {
		print_vec(vec);
	} while (nextPermutation(vec));

	return 0;
}

