/**
 * Code for: https://szore.blogspot.com/2017/07/classes-and-objects-in-c-and-real-life.html
 */

#include <iostream>
using namespace std;

class Mobile {
	// name of the mobile
	string mobile_name;
	// volume level of the mobile
	int volume_level;
	// brightness level of the mobile
	int brightness_level;
	// by default the phone is off
	bool phone_is_on = false;

public:
	void toggle_phone_state() {
		if (phone_is_on == false) {
			cout << "Phone is switched on." << endl;
			phone_is_on = true;
		} else {
			cout << "Phone is switched off." << endl;
			phone_is_on = false;
		}
	}

	void set_volume(int vol) {
		cout << "New volume is: " << vol << endl;
		volume_level = vol;
	}

	void set_brightness(int brightness) {
		cout << "New brightness is: " << brightness << endl;
		brightness_level = brightness;
	}
};

int main() {
	Mobile my_android;
	my_android.toggle_phone_state();
	my_android.set_volume(5);
	my_android.set_brightness(3);

	return 0;
}
