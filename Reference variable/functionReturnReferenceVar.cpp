#include<iostream>
using namespace std;

int& referenceVar(int &a){
     int &num = a;
     num = 32;      
     return num; // this is a bad practice returning the local reference variable ;
}

main() {

    int i = 3;

    cout<<" before :: "<< i << endl;

    int &get = referenceVar(i);
    cout<<"num value return :: "<< get << endl ;

    cout<<"After :: "<< i << endl;
    
}