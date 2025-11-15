#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Department {
public:
    string deptName;
};

class Employee : public Person, public Department {
public:
    void display() {
        cout << "Employee: " << name << ", Age: " << age
             << ", Department: " << deptName << endl;
    }
};

int main() {
    Employee e;
    e.name = "John";
    e.age = 30;
    e.deptName = "HR";
    e.display();
    return 0;
}