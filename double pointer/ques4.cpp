#include<iostream>
using namespace std;

main() {
    float f = 12.5;
    float p = 12.5;

    float *ptr = &f;
    (*ptr)++;

    *ptr = p;

    cout<<endl<<f<<endl<<p;

}