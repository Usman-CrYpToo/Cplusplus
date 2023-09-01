#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main() {
    int arr[5] = {12,3,4,5,5}; 
    
    char ch[6] ="usman";

    // cout is implented different for character and interger array;
    cout<< arr<<endl;
    cout<<ch<<endl;

    char *chp = &ch[0];
    cout<<chp<<endl;  // cout will print everything until it will not found the null character ;
    
    char si= 'u';
    cout<<si<<endl;

    char *sip = &si;
    cout<<"hello:: "<<&sip<<endl;
}