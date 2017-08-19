#include <iostream>
using namespace std;

class shape {
public:
	double dim1;
	double dim2;

	void setDimensions(double dim1, double dim2) {
		this->dim1 = dim1;
		this->dim2 = dim2;
	}
};

class triangle : public shape {
public:
	double getArea() {
		return 0.5 * dim1 * dim2;
	}
};

class rectangle : public shape {
public:
	double getArea() {
		return dim1 * dim2;
	}
};

int main() {
	triangle t;
	t.setDimensions(6, 2);

	rectangle r;
	r.setDimensions(6, 2);

	cout << "area of triangle: " << t.getArea() << endl;
	cout << "area of rectangle: " << r.getArea() << endl;

	return 0;
}
