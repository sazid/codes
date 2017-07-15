#include <iostream>
using namespace std;

class Truck;
class Car;

class Car {
	int passenger;
	int speed;

public:
	Car(int p, int s) {
		passenger = p;
		speed = s;
	}

	friend void compare_speed(Car c, Truck t);
};

class Truck {
	int weight;
	int speed;

public:
	Truck(int w, int s) {
		weight = w;
		speed = s;
	}

	friend void compare_speed(Car c, Truck t);
};

void compare_speed(Car c, Truck t) {
	if (c.speed > t.speed) {
		cout << "Speed of car is more than the truck" << endl;
	} else if (c.speed < t.speed) {
		cout << "Speed of truck is more than the car" << endl;
	} else {
        cout << "Speed of both of them are equal" << endl;
	}
}

int main() {
	Truck t(2000, 100);
	Car c(4, 140);

	compare_speed(c, t);

	return 0;
}
