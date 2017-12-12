#include <iostream>
using namespace std;

class Shape {
	int height;
	int width;

public:
	static int counter;

	Shape() {
		// cout << "Object created" << endl;
		counter++;
	}

	void setValues(int w, int h) {
		width = w;
		height = h;
	}

	void area() {
		cout << "Area = " << width * height << endl;
	}
};

int Shape::counter = 0;

class Triangle : Shape {
};

int main() {
	Shape s;
	Triangle t1, t2;

	cout << Shape::counter << endl;

	return 0;
}
