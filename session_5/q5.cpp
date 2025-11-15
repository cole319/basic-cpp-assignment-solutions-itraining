#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string brandName;
    std::string modelName;
    int manufacturingYear;
    double basePrice;

public:
    Vehicle(
        const std::string& _brandName,
        const std::string& _modelName,
        int _year,
        double _basePrice
    ) : brandName(_brandName), modelName(_modelName),
        manufacturingYear(_year), basePrice(_basePrice) {}

    virtual void displayDetails() {
        std::cout << "Brand: " << brandName << "\n";
        std::cout << "Model: " << modelName << "\n";
        std::cout << "Year: " << manufacturingYear << "\n";
        std::cout << "Base Price: " << basePrice << "\n";
    }

    virtual double calculatePrice() = 0; // Pure virtual
    virtual void startEngine() = 0;      // Pure virtual

    virtual ~Vehicle() {}
};


class Car : public Vehicle {
    int seatingCapacity;
    bool hasAirconditioning;

public:
    Car(
        const std::string& _brandName,
        const std::string& _modelName,
        int _year,
        double _basePrice,
        int _seatingCapacity,
        bool _hasAirconditioning
    ) : Vehicle(_brandName, _modelName, _year, _basePrice),
        seatingCapacity(_seatingCapacity), hasAirconditioning(_hasAirconditioning) {}

    void displayDetails() override {
        Vehicle::displayDetails();
        std::cout << "Seating Capacity: " << seatingCapacity << "\n";
        std::cout << "Air Conditioning: " << (hasAirconditioning ? "Yes" : "No") << "\n";
    }

    double calculatePrice() override {
        double price = basePrice;
        if (hasAirconditioning) price += 50000; // Extra cost for AC
        price += seatingCapacity * 10000;       // Extra cost per seat
        return price;
    }

    void startEngine() override {
        std::cout << "Car Engine started.\n";
    }
};


class Bike : public Vehicle {
    bool hasABS;
    std::string type;

public:
    Bike(
        const std::string& _brandName,
        const std::string& _modelName,
        int _year,
        double _basePrice,
        bool _hasABS,
        const std::string& _type
    ) : Vehicle(_brandName, _modelName, _year, _basePrice),
        hasABS(_hasABS), type(_type) {}

    void displayDetails() override {
        Vehicle::displayDetails();
        std::cout << "Type: " << type << "\n";
        std::cout << "ABS: " << (hasABS ? "Yes" : "No") << "\n";
    }

    double calculatePrice() override {
        double price = basePrice;
        if (hasABS) price += 15000; // Extra cost for ABS
        if (type == "Sports") price += 30000; // Sports bike premium
        return price;
    }

    void startEngine() override {
        std::cout << "Bike Engine started.\n";
    }
};

class Truck : public Vehicle {
    double loadCapacity;
    int numberOfAxles;

public:
    Truck(
        const std::string& _brandName,
        const std::string& _modelName,
        int _year,
        double _basePrice,
        double _loadCapacity,
        int _numberOfAxles
    ) : Vehicle(_brandName, _modelName, _year, _basePrice),
        loadCapacity(_loadCapacity), numberOfAxles(_numberOfAxles) {}

    void displayDetails() override {
        Vehicle::displayDetails();
        std::cout << "Load Capacity: " << loadCapacity << " tons\n";
        std::cout << "Number of Axles: " << numberOfAxles << "\n";
    }

    double calculatePrice() override {
        double price = basePrice;
        price += loadCapacity * 20000; // Cost per ton
        price += numberOfAxles * 10000; // Cost per axle
        return price;
    }

    void startEngine() override {
        std::cout << "Truck Engine started.\n";
    }
};


int main() {
    Vehicle* v1 = new Car("Toyota", "Camry", 2022, 1000000, 5, true);
    Vehicle* v2 = new Bike("Yamaha", "R15", 2023, 150000, true, "Sports");
    Vehicle* v3 = new Truck("Tata", "HeavyDuty", 2021, 2000000, 10, 4);

    v1->displayDetails();
    std::cout << "Final Price: " << v1->calculatePrice() << "\n\n";

    v2->displayDetails();
    std::cout << "Final Price: " << v2->calculatePrice() << "\n\n";

    v3->displayDetails();
    std::cout << "Final Price: " << v3->calculatePrice() << "\n\n";

    v1->startEngine();
    v2->startEngine();
    v3->startEngine();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}