#include<iostream>
using namespace std;

inline int powrOf2(int powr) { // 3 //2 //1 //0
      if (powr == 0){
        return 1 ; //1
      }

    int smallPro =  powrOf2(powr -1); //2 //1 //0      
    int bigPro = 2 * smallPro; // 2 // 4 // 8
    
    return bigPro; //2  // 4 //8

}

main() {
    int powr = 3;
     
     int ans = powrOf2(powr);

     cout<< "2 ** " << powr << " :: "<< ans;
}

// 2 x 2 x 2 x 2 = 16

