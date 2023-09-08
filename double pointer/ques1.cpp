#include<stdio.h>
#include<iostream>
using namespace std;

main() {
    int first = 5;
    int second= 6;

    int *p = &second;
    *p= 9;

    cout<<endl<<first;
    cout<<endl<<second;
}