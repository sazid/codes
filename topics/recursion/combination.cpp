#include <iostream>
#include <vector>
#define REP(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define PB push_back
#define POB pop_back
using namespace std;

// number of blanks
int _ = 3;
int n = 2;
vi vec;

void comb(int pos) {
	if (pos >= _) {
		REP(i, 0, vec.size()) {
			cout << vec[i] << " ";
		}
		cout << "\n";
		return;
	}

	REP(i, 1, n+1) {
		vec.PB(i);
		comb(pos + 1);
		vec.POB();
	}
}

int main() {
	comb(0);
	return 0;
}