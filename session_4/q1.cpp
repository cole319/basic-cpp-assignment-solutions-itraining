
#include <iostream>
#include <string>
using namespace std;

class MathOperations{
    static int staticNum;
    
    public:
    
    static int getSquare(){
        return staticNum*staticNum;
    }
    
    static int getCube(){
        int square = staticNum*staticNum;
        return square*staticNum;
    }

};

int MathOperations::staticNum = 5;


int main (){
    
    cout << MathOperations::getSquare() << endl;
    cout << MathOperations::getCube() << endl;
    
    return 0;
}