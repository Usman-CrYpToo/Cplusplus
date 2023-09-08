#include<iostream>
using namespace std;

main() {
     
     int first = 2 ;
     int *p1 = &first;

     int **p2 = &p1;

     int second = (**p2)++ + 8;
     cout<< second;
}