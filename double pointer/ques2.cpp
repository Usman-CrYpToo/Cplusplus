#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main() {
   int i = 5;
   int *p1 = &i;

   int *p2 = p1;
   (*p2)++;

   cout<<endl<<i;
}