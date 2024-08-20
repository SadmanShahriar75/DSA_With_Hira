//  Find sum of all element in one array i.e [1,3,4,5,5,6,7] is given array,
//  please now find sum of 1+2+3+4.... N
#include <iostream>
using namespace std;

int sumAll(){
    int arr[7] = {1,3,4,5,5,6,7};
    int sum = 0;
    for (int i=0; i <=6; i++){
        sum = sum + arr[i];
       
    }
     cout << sum << endl;
}


// int findSum(int n){
//     int arr[n];
//     int sum = 0;
//     for (int i=0; i <= n; i++){
//         sum = sum + arr[i];
       
//     }
//      cout << sum << endl;
// }

int main(){
    sumAll();
    // int n;
    // n = 10;
    // findSum(n);
    
}