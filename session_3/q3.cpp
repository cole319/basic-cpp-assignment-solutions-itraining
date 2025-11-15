
#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    int length;
    int width;
    
    public:
    Rectangle(){
        length=0;
        width=0;
    }
    
    int getLength() const{
        return length;
    }
    
    int getWidth() const{
        return width;
    }
    
    void setParameters (int _length, int _width){
        length = _length;
        width = _width;
    }
};


int main (){
    
    Rectangle rec;
    
    cout << rec.getLength() << endl;
    cout << rec.getWidth() << endl;
    
    rec.setParameters(45, 20);
    
    cout << "after setting parameters" << endl;
    
    cout << rec.getLength() << endl;
    cout << rec.getWidth() << endl;
    
    return 0;

}