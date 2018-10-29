#include <iostream>
using namespace std;

class XYZEmployeeInformationSystem {
private:
    string name;
    int id;
    string phone;
    bool is_married;

public:
    static int no_of_employees;
    
    XYZEmployeeInformationSystem(string n, int i, string p, bool m) {
        cout << "Adding a new employee to the system" << endl;
        name = n;
        id = i;
        phone = p;
        is_married = m;
        no_of_employees++;
        cout << "Now, the total number of employees is: " << no_of_employees << endl;
    }

    ~XYZEmployeeInformationSystem() {
        cout << "Removing employee from the system" << endl;
        no_of_employees--;
        cout << "Now, the total number of employees is: " << no_of_employees << endl;
    }

    void setName(string n) {
        name = n;
    }

    void setId(int i) {
        id = i;
    }

    void setPhone(string p) {
        phone = p;
    }

    void setMaritalStatus(bool m) {
        is_married = m;
    }

    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    string getPhone() {
        return phone;
    }

    bool getMaritalStatus() {
        return is_married;
    }
};

int XYZEmployeeInformationSystem::no_of_employees = 0;

int main() {
    XYZEmployeeInformationSystem emi("Emily", 12, "(88) 000 - 000", true);
    emi.setName("Emily Clark");
    emi.setPhone("(88) 123 - 321");
    cout << "Name: " << emi.getName() << endl;
    cout << "ID: " << emi.getId() << endl;
    cout << "Phone: " << emi.getPhone() << endl;
    cout << "Marital status: " << emi.getMaritalStatus() << endl;

    return 0;
}

