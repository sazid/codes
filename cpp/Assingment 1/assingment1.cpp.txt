#include <iostream>
using namespace std;

class Creature {
private:
	string name_of_creature;
	unsigned int number_of_legs;	// cannot be negative
	unsigned int number_of_eyes;	// cannot be negative

	// static variable - all objects of this class share a single copy of this variable
	// keeps count of how many 'Creature' objects are created
	static unsigned int number_of_creatures;

public:
	// constructor
	Creature(
		const string name,
		const unsigned int legs,
		const unsigned int eyes
	) {
		cout << "Constructing creature: " << name << endl;
		name_of_creature = name;
		number_of_legs = legs;
		number_of_eyes = eyes;
		number_of_creatures++;
	}

	// destructor
	~Creature() {
		// Reduce the number of creatures
		number_of_creatures--;
		cout << "Destructing creature: " << name_of_creature << endl;
	}

	// getters
	string get_name() {
		return name_of_creature;
	}

	unsigned int get_number_of_legs() {
		return number_of_legs;
	}

	unsigned int get_number_of_eyes() {
		return number_of_eyes;
	}

	static unsigned int get_number_of_creatures() {
		return number_of_creatures;
	}

	// setters (defined outside class)
	void set_name_of_creature(string name);
	void set_number_of_legs(unsigned int legs);
	void set_number_of_eyes(unsigned int eyes);

	// methods
	void can_run_or_not(bool r) {
		if (r)
			cout << name_of_creature << " can run!" << endl;
		else
			cout << name_of_creature << " cannot run!" << endl;
	}

	void can_fly_or_not(bool f) {
		if (f)
			cout << name_of_creature << " can fly!" << endl;
		else
			cout << name_of_creature << " cannot fly!" << endl;
	}

	void can_swim_or_not(bool s) {
		if (s)
			cout << name_of_creature << " can swim!" << endl;
		else
			cout << name_of_creature << " cannot swim!" << endl;
	}

	void show_creature_details() {
		cout << name_of_creature << " has "
			 << number_of_legs << " legs and "
			 << number_of_eyes << " eyes. " << endl;
	}
};

unsigned int Creature::number_of_creatures = 0;

void Creature::set_name_of_creature(string name) {
	name_of_creature = name;
}

void Creature::set_number_of_legs(unsigned int legs) {
	number_of_legs = legs;
}

void Creature::set_number_of_eyes(unsigned int eyes) {
	number_of_eyes = eyes;
}

int main() {
	Creature dog("Dog", 4, 2);
	Creature cat("Cat", 4, 2);
	Creature fish("Fish", 0, 2);
	Creature bird("Bird", 2, 2);
	cout << endl;

	dog.can_run_or_not(true);
	cat.can_swim_or_not(false);
	fish.can_swim_or_not(true);
	bird.can_fly_or_not(true);
	bird.can_run_or_not(false);

	cout << endl << "Cat - Mini ---" << endl;
	Creature mini("Cat", 4, 2);
	mini.set_name_of_creature("Mini");
	// mini is blind in 1 eye
	mini.set_number_of_eyes(1);
	// one of her legs are broken
	mini.set_number_of_legs(4);
	// she can't run :(
	mini.show_creature_details();
	mini.can_run_or_not(false);
	cout << endl;

	cout << "Number of creatures created so far: " << Creature::get_number_of_creatures() << endl << endl;

	return 0;
}