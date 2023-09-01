#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

void print(int *ptr){
    cout<<"address of pointer :: "<< ptr<<endl;
    cout<<"value of pointer :: "<< *ptr<<endl;
}

void updateAddress(int *ptr){
    ptr = ptr + 1;
    cout<<"udate only inside function ::"<< ptr<<endl;
}

void updateValue(int *ptr){
     *ptr = 55;
}

int getSum(int *arr,int size){ // (int arr[]) are same (int *arr)
     cout<<"size of array in function i.e it is a pointer :: "<< sizeof(arr)<<endl;
     int sum = 0;
     for(int i=0; i < size/4; i++){
        sum+= *(arr + i);
     }
     return sum;
}


main() {
   
   int value = 5;
   int *p = &value;
    print(p);
    
    cout<<"before:: "<<p<<endl;
    updateAddress(p);
    cout<<"after:: "<<p << endl;

    updateValue(p);
    print(p);
     
     int nums[5] = {1,2,3,4,5};
     cout<<"size of array in main :: "<<sizeof(nums)<< endl;
    cout<< "sum of the array :: "<<getSum(nums, sizeof(nums))<<endl;

}