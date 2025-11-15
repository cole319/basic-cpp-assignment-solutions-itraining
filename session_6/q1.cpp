#include<iostream>

long long int getFactorial(long long int num){
    // if(num <= 2 && num > 0) return num;
    if(num<=1) return 1;
    return num * getFactorial(num-1);
}

int main(){
    long long int n = 15;
    std::cout << getFactorial(15) ;
    return 0;
}