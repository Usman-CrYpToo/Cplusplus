#include<iostream>
using namespace std;

bool isSorted(int arr[], int size ) {
     //base case
     if(size == 0 ){
        return true;
     }
    
    bool ans = isSorted(arr, size -1);
     cout<<ans << "  "<< size <<endl;
     if(arr[size - 1] > arr[size] ){
        ans = false;
     }
     return ans;

}

main() {

    int arr[] = {2,3,4, 1, 9 ,0};
   bool get = isSorted(arr, (sizeof(arr) / 4) - 1);
   cout<<get;
}