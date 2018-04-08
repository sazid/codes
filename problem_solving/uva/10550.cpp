#include <iostream>
using namespace std;
typedef long ull;

ull ang(ull i, ull a, ull b, ull c) {
	ull p = (((i-a)%40)+40)%40 == 0 ? 40 : (((i-a)%40)+40)%40;
	ull q = (((b-a)%40)+40)%40 == 0 ? 40 : (((b-a)%40)+40)%40;
	ull r = (((b-c)%40)+40)%40 == 0 ? 40 : (((b-c)%40)+40)%40;
	return (120 + p + q + r)*9;
}

int main() {
	ull i, a, b, c;
	while (scanf("%ld %ld %ld %ld", &i, &a, &b, &c) && (i || a || b || c)) {
		printf("%ld\n", ang(i, a, b, c));
	}
	return 0;
}