#include<iostream>
using namespace std;


inline void gharPoncho(int step, int des) {

    cout << "steps :: " << step << " destination :: " << des <<endl;
       // base case 
       if(step == des) {
          cout<< "poonch gaye ab wapas jao";
          return;
       }
    
       step++;

       gharPoncho(step, des);

    cout<<endl << "steps :: " << step << " destination :: " << des ;

}


main () {
    int destination = 10;
    int step = 1;
    
    gharPoncho(step, destination);
    
}