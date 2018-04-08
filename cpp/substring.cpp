#include <iostream>

using namespace std;

int main()
{
	string s = "This is a test string";
	cout << s.substr(5) << endl;
	cout << s.substr(0, 5) << endl;
	s.insert(5, "hello ");
	cout << s << endl;
	s.erase(5, 6);
	cout << s << endl;

	return 0;
}
