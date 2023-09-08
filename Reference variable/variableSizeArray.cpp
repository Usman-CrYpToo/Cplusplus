#include<iostream>

using namespace std;

void insert(int *arr, int size){
      
      for(int i = 0; i < size; i++){
          cout<<endl<<"Enter the number arr["<<i<<"] :: ";
          cin>> *(arr + i);
      }
}

void print(int *arr, int size){
    for(int i = 0; i < size; i++){
         cout<<endl << i[arr];
    }
}

main(){
    int n;
    cout<< "enter the size of array :: ";
    cin>> n;

    int *arr = new int[n]; //this will create the memory in heap ;
    
    insert(arr, n);
    print(arr, n);

    delete []arr; // we need to delete the heap memory because it is not automatically deleted ;
    

}