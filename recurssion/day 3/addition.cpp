#include<iostream>
using namespace std;

int addition(int arr[], int size) {
    //base case 
    if(size == 0){
        return 0;
    }
    
   int sum = addition(arr, size -1);
   return sum + arr[size -1];
}

main() {
    int arr[ ] = {1, 2, 3, 4, 5};
    
    int add =addition(arr, sizeof(arr) / 4);
    cout<<add;
}