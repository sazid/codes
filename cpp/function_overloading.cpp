#include <iostream>
using namespace std;

// add two 'int' and return their sum
int add(int a, int b) {
	return a + b;
}

// add two 'double' and return their sum
double add(double a, double b) {
	return a + b;
}

// concatenate (join) two 'string' and return the result
string add(string a, string b) {
	return a + b;
}

// this function just adds 5 to any number it is supplied
int add(int x) {
	return x + 5;
}

int main() {
	// this add(5, 3) will call the function at line 4
	cout << add(5, 3) << endl;

	// this add(5.05, 2.90) will call the function at line 9
	cout << add(5.05, 2.90) << endl;

	// this add("hello ", "world") will call the function at line 14
	cout << add("hello ", "world") << endl;

	// this add(10) will call the funciton at line 20
	cout << add(10) << endl;

	return 0;
}
