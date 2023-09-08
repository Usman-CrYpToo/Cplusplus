#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main() {
    int i = 5;
    int *p  = 0;
    
    p = &i;

    cout<<*p;

}