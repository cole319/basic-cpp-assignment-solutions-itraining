#include <iostream>
using namespace std;

class Vehicle {
protected:

	int speed;
	string color;

public:

	Vehicle(int _speed, const string& _color):speed(_speed),color(_color) {
	}

	void setVehicleSpeed(int _speed) {
		if(_speed == speed) return;
		speed = _speed;
	}

	void setVehicleColor(const string& _color) {
		if(_color== color) return;
		color = _color;
	}

	int getVehicleSpeed() const {
		return speed;
	}

	string getVehicleColor() const {
		return color;
	}
};


class Car: public Vehicle {
public:
	Car (int _speed, const string& _color):Vehicle(_speed, _color) {
	}
};

class MotorCycle: public Vehicle {
public:
	MotorCycle(int _speed, const string& _color):Vehicle(_speed, _color) {
	}
};

class Truck: public Vehicle {
public:
	Truck(int _speed, const string& _color):Vehicle(_speed, _color) {
	}
};

int main() {
	// Create objects of derived classes
	Car car(120, "Red");
	MotorCycle bike(80, "Black");
	Truck truck(60, "Blue");

	// Show inherited functionality
	cout << "Initial details:" << endl;
	cout << "Car -> Speed: " << car.getVehicleSpeed() << ", Color: " << car.getVehicleColor() << endl;
	cout << "MotorCycle -> Speed: " << bike.getVehicleSpeed() << ", Color: " << bike.getVehicleColor() << endl;
	cout << "Truck -> Speed: " << truck.getVehicleSpeed() << ", Color: " << truck.getVehicleColor() << endl;

	// Modify properties using inherited setters
	car.setVehicleSpeed(150);
	car.setVehicleColor("Yellow");

	bike.setVehicleSpeed(90);
	truck.setVehicleColor("Green");

	cout << "\nAfter modifications:" << endl;
	cout << "Car -> Speed: " << car.getVehicleSpeed() << ", Color: " << car.getVehicleColor() << endl;
	cout << "MotorCycle -> Speed: " << bike.getVehicleSpeed() << ", Color: " << bike.getVehicleColor() << endl;
	cout << "Truck -> Speed: " << truck.getVehicleSpeed() << ", Color: " << truck.getVehicleColor() << endl;

	// Demonstrate polymorphism using base class pointer
	cout << "\nPolymorphism demonstration:" << endl;
	Vehicle* v1 = &car;
	Vehicle* v2 = &bike;
	Vehicle* v3 = &truck;

	cout << "Vehicle pointer to Car -> Speed: " << v1->getVehicleSpeed() << ", Color: " << v1->getVehicleColor() << endl;
	cout << "Vehicle pointer to MotorCycle -> Speed: " << v2->getVehicleSpeed() << ", Color: " << v2->getVehicleColor() << endl;
	cout << "Vehicle pointer to Truck -> Speed: " << v3->getVehicleSpeed() << ", Color: " << v3->getVehicleColor() << endl;

	return 0;
}