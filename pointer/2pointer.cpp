#include<stdio.h>
#include<iostream>
using namespace std;

main() {

    // int arr[4] ={12,3,4,44};
    // cout<< "finding address with the name of array var :: "<< arr << endl;
    // cout<<"finding address with the address of operator :: "<< &arr[0]<< endl;
    
    // cout<<"4th :: " << *arr<< endl;
    // cout<< "5th :: "<< *arr + 1<<endl;
    // cout<< "6th :: "<< *(arr + 1)<<endl;
    
    // // we can also call the arr value by index[array]; // formula *(i + arr);
    // cout<< 1[arr]<<endl;
    // cout<< 2[arr]<<endl;
    // cout<<*(arr + 3);


    int temp[10] = {0};
    
    int *p = temp;

    cout<<temp<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    cout<<sizeof(temp)<<endl;
    cout<<sizeof(&p)<<endl;




}