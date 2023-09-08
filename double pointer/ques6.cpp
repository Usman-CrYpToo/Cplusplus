#include<iostream>
using namespace std;

main(){

    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout<< *ptr;
}