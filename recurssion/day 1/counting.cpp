#include<iostream>
using namespace std;

inline void counting(int num ) {
     if(num == 0){
        return ;
     }
    counting(num -1); // 2 // 1 //0
    cout<<num<<endl; 
    
  
}

main( ) {

    int num = 3;

    counting(num);


}