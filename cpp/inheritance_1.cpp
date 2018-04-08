#include <iostream>
using namespace std;

class Shape {
protected:
	int width;
	int height;

public:
	Shape() {
		cout << "Constructor for Shape" << endl;
	}

	~Shape() {
		cout << "Destructor for Shape" << endl;
	}

	void setWidth(int w) {
		width = w;
	}

	void setHeight(int h) {
		height = h;
	}

	int getWidth() {
		return width;
	}

	int getHeight() {
		return height;
	}
};

/*
 * When inheriting, specifying an access modifier before the name of the base class 
 * have the following effects:
 * public - everything is inherited as is
 * protected - inherit all public and protected members as protected
 * private - inherit all public and protected members as private
 * (inaccessible to any child classes of this class)
 */
class Rectangle : protected Shape {
public:
	Rectangle() {
		cout << "Constructor for Rectangle" << endl;
	}

	~Rectangle() {
		cout << "Destructor for Rectangle" << endl;
	}

	void showArea() {
		cout << width * height << endl;
	}
};

class Square : Rectangle {
public:
	void showArea() {
		cout << width * height << endl;
	}
};

int main() {
	Rectangle r;

	return 0;
}
