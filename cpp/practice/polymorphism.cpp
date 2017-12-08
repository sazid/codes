#include <iostream>
using namespace std;

class shape {
protected:
	int d1;
	int d2;

public:
	shape(int a, int b) {
		d1 = a;
		d2 = b;
		cout << "shape constructor\n";
	}

	void showDim() {
		cout << d1 << " " << d2 << endl;
	}
};

class triangle : public shape {
public:
	triangle(int a, int b) : shape(a, b) {
		cout << "triangle constructor\n";
	}

	void area() {
		cout << 0.5 * d1 * d2 << endl;
	}
};

class box : public triangle {
public:
	box(int a, int b) : triangle(a, b) {
		cout << "box constructor\n";
	}
	
	void area() {
		cout << d1 * d2 << endl;
	}
};

class test {
public:
	test() {
		cout << "constructor for test\n";
	}

	void printTest() {
		cout << "test\n";
	}
};

class hybrid : public test, public shape {
public:
	hybrid(int a, int b) : test(), shape(a, b) {
		cout << "constructor for hybrid\n";
	}
};

int main() {
	shape s(1, 2);
	triangle t(4, 2);
	box b(2, 3);

	shape *ps;
	ps = &s;
	ps->showDim();

	ps = &t;
	ps->showDim();

	ps = &b;
	ps->showDim();

	triangle *pt = &t;
	pt->area();

	hybrid a(12, 4);
	ps = &a;
	ps->showDim();

	test *tt = &a;
	tt->printTest();

	return 0;
}