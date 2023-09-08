#include<iostream>
using namespace std;

main() {
      int i = 5;

      int &j = i;

      cout<<i<<endl<<j<<endl;

      i++ ;

      cout<<i << endl << j <<endl;

      j++;

      cout<<i << endl << j <<endl;
       
      j = 22;

      cout<< i << endl << j <<endl;
}