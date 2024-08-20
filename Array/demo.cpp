
#include <iostream>
using namespace std;
int main(){
   
   int arr[] = {2,5,7,3,6,9,2};
   int n = sizeof(arr) / sizeof(int);
   int max = arr[0];

   for(int i = 0; i < n; i++){
    if (arr[i] > max){
        max = arr[i];
    }
   }
   cout << max;
   return 0;
}