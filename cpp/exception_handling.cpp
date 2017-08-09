#include <iostream>

using namespace std;

int main() {
	int a;

	try {
		cout << "Enter a value: ";
		cin >> a;
		if (a < 0) {
			throw 2;
		}
	} catch (int e) {
		cout << "ERROR #" << e << ": You can't input a number less than 0" << endl;
	}

	return 0;
}
