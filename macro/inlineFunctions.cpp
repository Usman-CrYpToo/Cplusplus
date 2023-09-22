#include<iostream>
using namespace std;

inline int getMax(int &a, int &b) { 
     return (a > b ? a : b); // inline function cannot be more than the one line;
}

main() {
    int a = 2 , b = 3;
    
    int ans = getMax(a , b);

    cout<< ans;
}