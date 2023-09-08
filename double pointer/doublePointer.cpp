#include<iostream>
using namespace std;

void update(int **ptrr){
    //  ptrr = ptrr + 1; //this will not update 
     
     *ptrr = *ptrr + 1; //this will update

    //  **ptr = **ptr +1 ;//this will update 
}

main(){
    int i = 5;

    int *p1 = &i;

    int **p2 = &p1;
    cout<<endl<<"address stored in p1 :: "<<p1;
    cout<<endl<<"address of &p1 :: "<<&p1;
    cout<<endl<<"value in *p1 :: "<<*p1;

    cout<<endl;

    cout<<endl<<"address stored in p2 :: "<<p2;
    cout<<endl<<"value in p2 by *p2 :: "<<*p2;
    cout<<endl<<"value in p2 by **p2 :: "<<**p2;


    //now we will try to update using function 

   cout<<endl<< endl<<"before";
   cout<<endl<<"address stored in p2:: "<<p2;
    cout<<endl<<"address stored in p1::"<<*p2;

    update(p2);

   cout<<endl<<"after";
   cout<<endl<<"address stored in p1:: "<<p1;

   
    
}