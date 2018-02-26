#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void print_str_char(string s) {
    string::size_type i, len = s.size();
    chrono::milliseconds timespan(60);
    for (char c : s) {
        cout << c;
		cout.flush();
        this_thread::sleep_for(timespan);
    }
}

int main() {
    print_str_char("Hello World\n");
    
    return 0;
}
