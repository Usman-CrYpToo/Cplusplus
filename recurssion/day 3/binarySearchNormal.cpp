#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key) {
     int s = 0;
     int e = size -1;
       
      int mid ; 
     while(s <= e) {
        mid = s + ((e - s) / 2);
        if(arr[mid] == key) {
            return true;
        }

        if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
        }

     }
     return false;
}

main () {
  int arr[] = { 1, 2, 3, 4, 55};
  
  bool  ans = binarySearch(arr, sizeof(arr) / 4, 1);
  cout<<ans<<endl;
}