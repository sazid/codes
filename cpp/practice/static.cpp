#include <iostream>
using namespace std;

class A {
	int x;
public:
	static int count;
	A() {
		count++;
	}

	static void hello();
};

int A::count = 0;

void A::hello() {
	cout << "Hello!\n";
}

int main() {
	A a, b, c, d;
	cout << "Count: " << A::count << "\n";
	A::hello();
	cout << "With object a \n";
	a.hello();
	return 0;
}