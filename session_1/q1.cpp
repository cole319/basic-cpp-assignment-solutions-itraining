#include <iostream>
using namespace std;

int getSum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // taking fixed size of 5 to avoid using vectors.
    int arr[5] = {2, 41, 8, 12, 23};

    cout << getSum(arr);
    return 0;
}