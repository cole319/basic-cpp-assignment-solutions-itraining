#include<iostream>
#include<algorithm>
using namespace std;

int multiplicationOf(int *a, int &b){
    int aVal = *a;
    return aVal*b;
}

int main(){
    int a = 5;
    int b = 6;
    cout << multiplicationOf(&a, b);
    return 0;
}