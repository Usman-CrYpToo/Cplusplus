#include<iostream>
using namespace std;

inline int factorial(int num ){
     if(num == 0) {
         return 1;
     }
     return num * factorial(num - 1);
}

main() {
    int num ;
     cout<< "ENTER THE NUMBER ::";
     cin >> num;
     
    int fac = factorial(num);

    cout<<"the factorial of " << num << " is " << fac;
}