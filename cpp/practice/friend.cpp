#include <iostream>
using namespace std;

class Truck;
class Car {
	int speed;
public:
	Car(int s) {
		speed = s;
	}

	void compSpeed(Truck t);
};

class Truck {
	int speed;
public:
	Truck (int s) {
		speed = s;
	}

	friend void Car::compSpeed(Truck t);
};

void Car::compSpeed(Truck t) {
	if (speed > t.speed) {
		cout << "Car is faster\n";
	} else {
		cout << "Truck is faster\n";
	}
}

int main() {
	Car c(21);
	Truck t(10);
	c.compSpeed(t);
	return 0;
}