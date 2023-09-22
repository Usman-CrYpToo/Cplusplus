#include<iostream>
using namespace std;

int num = 13; // global variable // this is the bad practice and can be changed any where

void b(){
    num = 12;
}

main() {
    cout<<"in the main before:: "<< num << endl; 

     b();

     cout<< "in the main after :: " << num <<endl;
}