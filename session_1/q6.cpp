// q5

#include <iostream>
#include <algorithm>

using namespace std;


int returnMax(int *arr, int n){
    int maximum = arr[0];
    
    if(n == 1) return maximum;
    
    for(int i=1; i<n; i++){
        maximum = max(arr[i], maximum);
    }
    return maximum;
}

int main(){
   int arr[5] = {1,2,3,4,5}; 
   cout << returnMax(arr, 5);
   return 0;
}