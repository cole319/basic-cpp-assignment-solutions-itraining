// q5

#include <iostream>
#include <algorithm>

using namespace std;


void func(int &a, int &b, int &c){
    int temp = a + b;
    c = temp;
    cout << c << endl;
}

int main(){
    int a = 5;
    int b = 6;
    int c;
    
   func(a, b, c);
   return 0;
}