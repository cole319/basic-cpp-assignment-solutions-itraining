#include<iostream>
#include<algorithm>
using namespace std;

void reverseSort(int (&arr)[5]){
    sort(arr, arr+5);

    for(int i=4; i>=0; i--){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    reverseSort(arr);
    return 0;
}