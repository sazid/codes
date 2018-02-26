#include <iostream>
using namespace std;

int* count_coins(int *C, int *O, int n, int x) {
	int s = 0, t = x;
	for (int i = 0; i < n && s < x; i++) {
		O[i] = t / C[i];
		s += C[i] * O[i];
		t = t % C[i];
	}
	if (s != x) cout << "Impossible\n";
	return O;
}

int main() {
	int C[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
	int *O = new int[9];
	O = count_coins(C, O, 9, 35);

	for (int i = 0; i < 9; i++) {
		if (O[i]) cout << C[i] << " : " << O[i] << endl;
	}

	return 0;
}
