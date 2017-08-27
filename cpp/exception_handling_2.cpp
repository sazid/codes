#include <iostream>
using namespace std;

int main() {
	try {
		// int n;
		// cin >> n;
		// if (n < 6 || n > 12) {
		// 	throw '1';
		// }

		try {
			throw 't';
		} catch (char c) {
			try {
				throw;
			} catch (int a) {
				throw;
			}
		}
	} catch (int n) {
		cout << "Error #" << n << ": Cannot be less than 6 or greater than 12\n";
	} catch (char c) {
		cout << "Char error #" << c << endl;
	}

	try {
		cout << "Enter a character: ";
		char c;
		cin >> c;
		if (c == 'A' || c == 'B') {
			throw 'd';
		}
	} catch (char t) {
		cout << "Another char error: " << t << endl;
	}

	return 0;
}