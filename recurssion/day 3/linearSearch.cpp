#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int num){
     if(size == 0) {
        return false ;
     }

     bool ans = linearSearch(arr + 1, size - 1, num);
      
      if(arr[0] == num) {
        return true;
      }
      return ans; 
}

main() {
    int arr[] = {44, 5, 6};

   bool ans = linearSearch(arr, sizeof(arr) / 4, 1);
   cout<<ans;

}