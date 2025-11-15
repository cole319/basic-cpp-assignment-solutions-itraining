#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) {}
    virtual double calculateSalary() const = 0; // Pure virtual function
    virtual void displayDetails() const = 0;    // Pure virtual function
    virtual ~Employee() {} // Virtual destructor
};


class Manager : public Employee {
private:
    double baseSalary;
    double bonus;
public:
    Manager(string n, int i, double base, double b)
        : Employee(n, i), baseSalary(base), bonus(b) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void displayDetails() const override {
        cout << "Manager: " << name << " (ID: " << id << ")\n";
        cout << "Base Salary: " << baseSalary << ", Bonus: " << bonus << "\n";
        cout << "Total Salary: " << calculateSalary() << "\n\n";
    }
};


class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Engineer(string n, int i, double rate, int hours)
        : Employee(n, i), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }

    void displayDetails() const override {
        cout << "Engineer: " << name << " (ID: " << id << ")\n";
        cout << "Hourly Rate: " << hourlyRate << ", Hours Worked: " << hoursWorked << "\n";
        cout << "Total Salary: " << calculateSalary() << "\n\n";
    }
};


class Technician : public Employee {
private:
    double dailyWage;
    int daysWorked;
public:
    Technician(string n, int i, double wage, int days)
        : Employee(n, i), dailyWage(wage), daysWorked(days) {}

    double calculateSalary() const override {
        return dailyWage * daysWorked;
    }

    void displayDetails() const override {
        cout << "Technician: " << name << " (ID: " << id << ")\n";
        cout << "Daily Wage: " << dailyWage << ", Days Worked: " << daysWorked << "\n";
        cout << "Total Salary: " << calculateSalary() << "\n\n";
    }
};


int main() {
    Employee* e1 = new Manager("Alice", 101, 50000, 10000);
    Employee* e2 = new Engineer("Bob", 102, 300, 160);
    Employee* e3 = new Technician("Charlie", 103, 200, 22);

    e1->displayDetails();
    e2->displayDetails();
    e3->displayDetails();

    delete e1;
    delete e2;
    delete e3;

    return 0;
}
