#include<iostream>
using namespace std;

bool binarySearch(int *arr,int start ,int end, int key){
     
    
     if(start > end) {
        return false ;
     }
     
      int mid = start + ((end - start) /2);
     if(arr[mid] == key) {
        return true;
     }
    
     

     if(key > arr[mid]){
       return binarySearch(arr, mid + 1, end, key);
     }
     else if(key < arr[mid]){
       return binarySearch(arr, start, mid -1, key);
     }
}



main() {
    int arr [] = {1, 2, 3, 4, 55,66, 77, 80};
    
    bool ans = binarySearch(arr,0 ,sizeof(arr)/4, 66);

    cout << ans<< endl;
}