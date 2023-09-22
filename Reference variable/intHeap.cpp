#include<iostream>
using namespace std;

main() {
     
     int *i = new int ; // this will return the address;
     
     *i = 44;

     cout<< "value :: "<< *i << endl << "address :: "<< &i << endl;
     
     delete i; // we must need to delete;
}