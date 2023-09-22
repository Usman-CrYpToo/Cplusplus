#include<iostream>
using namespace std;

inline void printArray(int *arr, int size, int start = 0){
    
    for(int i = start; i < size; i++) {
         cout<< arr[i];
         cout<<endl;
    }
}

main() {
   
    int arr[] = {1,2,3,4,5,6,7};
    
    printArray(arr, 7, 2);
    cout<<endl;
    printArray(arr, 7 );
}