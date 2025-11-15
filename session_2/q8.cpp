#include <iostream>
using namespace std;

float additionByVal(int a, float b) {
    float aFloat = (float)a;
    return aFloat + b; 
}

int main() {
    int a = 5;
    float b = 6;
    float sum;  
    sum = additionByVal(a, b);
    cout << "Sum: " << sum << endl;
    // cout << typeof(sum) << endl;
    return 0;
}
