// q4

#include <iostream>
#include <algorithm>

using namespace std;

void swapWithPtr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << a << b << endl;
    return;
}

int main()
{
    int a = 5;
    int b = 8;
    swapWithPtr(&a, &b);
    return 0;
}