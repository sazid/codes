#include <iostream>
using namespace std;

class Box {
	int box_width;
	int box_height;

public:
	// Box is the name of the constructor function
	// ITS NAME IS ALWAYS THE SAME AS ITS CLASS NAME
	// Since, a constructor function does not return anything,
	// it does not have a return type before its name
	Box(int width, int height) {
		// this constructor takes width and height

		/*
		Possible steps to make a Box object

		1. 	Get a cardboard
		2. 	Get the desired width and height
		3. 	Make (construct) the box by
			cutting the cardboard according to width/height
		*/

		box_width = width;
		box_height = height;

		cout << "Making a new box..." << endl;
		cout << "Gathering some cardboard..." << endl;
		cout << "Width: " << box_width << endl << "Height: " << box_height << endl;
		cout << "Making the box with the given width and height..." << endl;
		cout << "Done! Enjoy your new box" << endl;
	}
};

int main() {
	// Create a Box object named b
	Box b(30, 20);

	return 0;
}