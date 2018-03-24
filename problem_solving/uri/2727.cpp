#include <iostream>
using namespace std;

// 128 ASCII characters
// we're just concerned with 'a' to 'z'
string codes[128];

void initialize() {
	codes['a'] = ".";
	codes['b'] = "..";
	codes['c'] = "...";

	// count will cycle through values 0, 1, 2
	int count = 0;
	
	for (char c = 'd'; c <= 'z'; c++) {
		string add;
		
		if (count % 3 == 0) add = ".";
		else if (count % 3 == 1) add = "..";
		else if (count % 3 == 2) add = "...";

		codes[c] = codes[c-3] + " " + add;
		count++;
	}
}

int main() {
	initialize();

//	print to test
//	for (char c = 'a'; c <= 'z'; c++) {
//		cout << c << " - " << codes[c] << endl;
//	}

	int N;
	string s;
	while (cin >> N) {
		cin.ignore();
		for (int i = 0; i < N; i++) {
			getline(cin, s);
			for (char c = 'a'; c <= 'z'; c++) {
				if (codes[c] == s) cout << c << '\n';
			}
		}
	}

	return 0;
}
