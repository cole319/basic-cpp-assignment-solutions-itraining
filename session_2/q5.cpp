#include<iostream>
#include<algorithm>
using namespace std;

void increment(int *arr, int &inc){

   for(int i=0; i<5; i++){
    arr[i] += inc;
   }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int incrementer = 5;
    increment(arr, incrementer);
    for(auto i: arr){
        cout << i << endl;
    }
    return 0;
}