#include <iostream>
using namespace std;

class person {
private:
	string name;
	int age;

public:
	void setName(const string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setAge(const int a) {
		age = a;
	}

	int getAge() {
		return age;
	}
};

class student : public person {
private:
	float cgpa;

public:
	void setCGPA(const float c) {
		cgpa = c;
	}

	float getCGPA() {
		return cgpa;
	}
};

class teacher : public person {
private:
	int salary;

public:
	void setSalary(const int s) {
		salary = s;
	}

	float getSalary() {
		return salary;
	}
};

int main() {
	student s;
	s.setName("bill");
	s.setAge(20);
	s.setCGPA(3.78);

	teacher t;
	t.setName("alex");
	t.setAge(38);
	t.setSalary(2000);

	cout << "===== Student info =====" << endl;
	cout << "name: " << s.getName() << endl;
	cout << "age: " << s.getAge() << endl;
	cout <<	"cgpa: " << s.getCGPA() << endl;

	cout << "===== Teacher info =====" << endl;
	cout << "name: " << t.getName() << endl;
	cout << "age: " << t.getAge() << endl;
	cout << "salary: " << t.getSalary() << endl;

	return 0;
}