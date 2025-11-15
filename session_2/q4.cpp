#include<iostream>
#include<algorithm>
using namespace std;

void calculateAvg(float (&arr)[5], float &res){
   float sum = 0;

   for(float i: arr){
    sum+=i;
   }
   res = sum;
}

int main(){
    float arr[5] = {1.1, 2.1, 3.6, 4.8, 5.2};
    float res;
    calculateAvg(arr, res);
    cout << res;
    return 0;
}