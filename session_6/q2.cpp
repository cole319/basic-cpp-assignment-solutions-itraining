#include<iostream>

int getMax(int &a, int &b, int &c){
    if(a>b){
        if(a>c) 
            return a;
        else 
            return c;
    }
    else {
        if(b>c)
            return b;
        else 
            return c;
    }
}

int main()
{
    int a = 1;
    int b = 13;
    int c = 8;

    std::cout << getMax(a, b, c) << std::endl;
    
    return 0;
}