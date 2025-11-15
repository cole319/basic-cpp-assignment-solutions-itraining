#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;

public:
    Employee(int id, string n, double s) {
        empID = id;
        name = n;
        salary = s;
    }

    void setSalary(double s) {
        salary = s;
    }

    void display() {
        cout << "Employee ID: " << empID << "\nName: " << name
             << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee emp(101, "Alice", 50000);
    emp.setSalary(55000);
    emp.display();
    return 0;
}