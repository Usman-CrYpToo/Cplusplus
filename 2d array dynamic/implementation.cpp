#include<iostream>
#include<conio.h>

using namespace std;

main() {
   
    int row = 2;
    int col = 2;
    // int *arr1 = new int[row];

    int **arr2 = new int*[row];
  
    for(int i = 0 ; i < row; i++) {
         for(int j = 0 ; j < col ; j++){
             cout<< "arr["<<i<<"]"<<"["<<j<<"]=";
             cin>> arr2[i][j];
         }
    }

    for(int k = 0 ; k < row; k++) {
         for(int j=0 ; j < col; j++) {
                cout<< "arr["<<k<<"]"<<"["<<j<<"]="<< arr2[k][j];
         }
         cout<<endl;

    }

    //let del the array ;

     for(int i = 0 ; i < row; i++){
         delete []arr2[i];
     }

    delete []arr2;
     
}