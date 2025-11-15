#include <iostream>
using namespace std;

void ptrAddition(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int a = 5;
    int b = 6;
    int sum;  
    ptrAddition(&a, &b, &sum);
    cout << "Sum: " << sum << endl;
    return 0;
}
