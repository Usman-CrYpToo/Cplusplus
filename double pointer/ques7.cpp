#include<iostream>
using namespace std;

main() {
     char arr[6] = "usman";

     char *p = &arr[0];
     
     char *p1 = p + 1;
     cout<<p1;
}