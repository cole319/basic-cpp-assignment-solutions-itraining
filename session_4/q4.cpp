
#include <iostream>
using namespace std;

class Shape{
    static int count;
        
    protected:
    static void incrementCount(){
        count++;   
    }
    
    public:
    static int getCount(){
        return count;
    }

  
};

int Shape::count = 0;

class Circle: public Shape{
    public:
    
    Circle(){
        Shape::incrementCount();   
    }
};

class Rectangle : public Shape{
    public:
    
    Rectangle(){
        Shape::incrementCount();  
    }
};

int main (){
    
    Circle c;
    cout << Shape::getCount() <<endl;
    Rectangle r;
    cout << Shape::getCount() <<endl;
    Circle d, e;
    cout << Shape::getCount() <<endl;
    return 0;
}