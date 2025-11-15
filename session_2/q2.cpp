
#include <iostream>
using namespace std;

int getSum(int (&arr)[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    cout << getSum(arr);

    return 0;
}
