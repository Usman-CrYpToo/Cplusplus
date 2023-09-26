#include<iostream>
using  namespace std;

inline int addition(int num) { // 1 + 2 + 3
      if(num == 0) {
        return 0;
      }
    
     num += addition(num -1);

     return num;   
}

main() {
    int num = 5;

    int ans = addition(num );

    cout<< ans;
}