#include <iostream>
using namespace std;

class base {
	int a;
	int b;
public:
	base(int a, int b) {
		this->a = a;
		this->b = b;
	}

	virtual void print() {
		cout << "printing from base\n";
	}

	virtual void printX(int x) = 0;
};

class inherited : public base {
public:
	inherited(int a, int b) : base(a, b) {}
	void print() {
		cout << "printing from inherited\n";
	}

	virtual void printX(int x) {
		cout << x << "\n";
	}
};

int main() {
	// base b(12, 2);
	inherited i(32, 4);

	base *bp;
	// bp = &b;
	// bp->print();

	// b.print();
	i.print();

	bp = &i;
	bp->print();

	bp->printX(1024);

	return 0;
}