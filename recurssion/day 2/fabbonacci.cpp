#include<iostream>
using namespace std;

inline int findFabonnacci(int term) {
      // base case 

      if(term == 0) {
        return 0;
      }

      if(term == 1) {
        return 1;
      }

      int ans = findFabonnacci(term -1) + findFabonnacci(term -2);

      return ans;
}


main() {

    int term = 6;

    int fabonnacciTerm = findFabonnacci(term);
    cout<< fabonnacciTerm <<" fabonnacci number on this term " << term;
}