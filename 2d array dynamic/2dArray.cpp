#include<iostream>
#include<conio.h>

using namespace std;

main() {
     
   int *arr1 = new int[3];

    int **arr2 = &arr1 ;
     

     cout<< arr2<<endl;
     cout<< *arr2<<endl;
     cout<< arr1 <<endl;

     cout<<arr1[2]<<endl;
     cout<< *arr2[2]<<endl;


     cout<< *arr1<<endl;
     cout<< **arr2 <<endl;   

   delete []arr1;
}