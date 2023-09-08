#include<iostream>
using namespace std;

void update(int *p){
    *p = *p + 1;
}

main() {
   int i = 5;
   update(&i);
   cout<<endl<<i;     
}