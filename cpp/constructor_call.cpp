#include <iostream>

using namespace std;

class Shape {
public:
    Shape() {
        cout << "Shape: default constructor" << endl;
    }

    Shape(int a, int b) {
        cout << "Shape: parameterized constructor" << endl;
    }

    ~Shape() {
        cout << "Shape: Destructor" << endl;
    }
};

class Quadrilateral : public Shape {
public:
    Quadrilateral() {
        cout << "Quadrilateral: default constructor" << endl;
    }

    Quadrilateral(int a, int b) {
        cout << "Quadrilateral: parameterized constructor" << endl;
    }

    ~Quadrilateral() {
        cout << "Quadrilateral: destructor" << endl;
    }
};

class Square : public Shape {
public:
    Square() {
        cout << "Square: default constructor" << endl;
    }

    Square(int a, int b) : Shape(a, b) {
        cout << "Square: parameterized constructor" << endl;
    }

    ~Square() {
        cout << "Square: destructor" << endl;
    }
};

int main() {
    cout << "s1: " << endl;
    Shape s1;
    cout << "s2: " << endl;
    Shape s2(30, 20);
    cout << "r1: " << endl;
    Quadrilateral r1;
    cout << "r2: " << endl;
    Quadrilateral r2(10, 2);
    cout << "sq1: " << endl;
    Square sq1;
    cout << "sq2: " << endl;
    Square sq2(5, 10);
    return 0;
}
