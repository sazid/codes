#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    A() { a = 0; }
    A(int x) { a=x; cout << "Constructed" << endl; }
    void set_a(int i) { a=i; }
    int get_a() { return a; }
    ~A(){cout<<"Destroyed"<<endl;}
};

int main() {
    A objectOfA(4);
    A objectOfA2();
    cout<<objectOfA.get_a()<<endl;
}

