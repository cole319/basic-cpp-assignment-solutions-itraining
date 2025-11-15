#include <iostream>
using namespace std;

class Shape {
public:
    virtual float calculateArea() = 0;
    virtual int calculatePerimeter() = 0;
    virtual ~Shape() {} 
};

class Circle : public Shape {
    int radius;
public:
    Circle(int _radius) : radius(_radius) {}

    float calculateArea() override {
        return 3.14f * radius * radius;
    }

    int calculatePerimeter() override {
        return static_cast<int>(2 * 3.14f * radius);
    }
};

class Rectangle : public Shape {
    int length;
    int width;
public:
    Rectangle(int _length, int _width) : length(_length), width(_width) {}

    float calculateArea() override {
        return static_cast<float>(length * width);
    }

    int calculatePerimeter() override {
        return 2 * (length + width);
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);

    cout << "Circle Area: " << s1->calculateArea() << endl;
    cout << "Circle Perimeter: " << s1->calculatePerimeter() << endl;

    cout << "Rectangle Area: " << s2->calculateArea() << endl;
    cout << "Rectangle Perimeter: " << s2->calculatePerimeter() << endl;

    delete s1;
    delete s2;
    return 0;
}
