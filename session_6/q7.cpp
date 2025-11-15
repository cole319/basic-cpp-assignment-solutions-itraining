#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Circle area: " << 3.14 * 5 * 5 << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Rectangle area: " << 4 * 6 << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();

    for (int i = 0; i < 2; i++) {
        shapes[i]->area();
    }

    return 0;
}
