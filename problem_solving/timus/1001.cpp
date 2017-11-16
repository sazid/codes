// 1001. Reverse Root
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#define i64 long long
using namespace std;

int main() {
	vector<double> nums;
	i64 n;
	while (scanf("%lld", &n) != EOF) {
		nums.push_back(sqrt(n));
	}
	vector<double>::size_type i;
	for (i = nums.size()-1; i != 0; --i) {
		printf("%.4lf\n", nums[i]);
	}
	printf("%.4lf\n", nums[i]);
	return 0;
}
