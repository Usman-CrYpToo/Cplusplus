#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

main(){
     int a = 34;

     int *p = &a ;
     cout<< "\n"<<  a;
     cout<< "\n"<< *p;

     a++;

     cout<<"\n"<< a;
     cout<<endl<< *p;

     (*p)++ ;

     cout<<endl<< a;
     cout<<endl<<*p;

     cout<<endl<< p;
     cout<<endl<<&a;

     int *c = p;
     cout<<endl<<c;
     cout<<endl<<*c;

     cout<<endl << sizeof(*c);
     cout<<endl <<sizeof(c);

     int *k = c + 1; // this will increase the bytes in the storage according to the data type;

      cout<<endl<< k;
      c = c + 1;

      cout<<endl << c;
      cout<<endl << k;
  
      cout<<endl<<*k;
      cout<<endl<<*c;
      

     int a = 5;
     int *p1 = &a;
     int *p2 = p1 + 1;
     *p1 = 123;
     cout<<endl<<p1;
     cout<<endl<<p2;
    cout<<endl<<a;
   cout<<endl<<*p1;
    *p1 = 232;
    cout<<endl<<p2;

    p2 = new int;
    cout<<endl<<p2;
    *p2 = 300;
    cout<<endl<<*p2;
   
}