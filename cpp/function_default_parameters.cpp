#include <iostream>
using namespace std;

void show_info(string name = "Pantha", int age = 20) {
	cout << name << " is " << age << " years old." << endl;
}

int main() {
	show_info();
	show_info("Beck");
	show_info("Tony", 22);

	return 0;
}
