#include<iostream>
using namespace std;

void update(int &a) {
     
     a = 10;
}

main() {

    int k = 44;

    cout<<"before :: "<< k <<endl;

    update(k);

    cout<<endl << "after :: "<< k <<endl;
  
}