#include <iostream>
using namespace std;

class Vehicle {
public:
    string make;
    int year;
};

class Car : public Vehicle {
public:
    void display() {
        cout << "Car: " << make << ", Year: " << year << endl;
    }
};

int main() {
    Car c;
    c.make = "Toyota";
    c.year = 2022;
    c.display();
    return 0;
}