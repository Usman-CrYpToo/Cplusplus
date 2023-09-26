#include<iostream>
using namespace std;

void numToWords(string arr[], int num) {
     //base case
     if(num == 0) {
        return;
     }
     
    int no = num % 10;
     num /= 10; 
     numToWords(arr, num);

    cout<< arr[no] <<endl; 

}

//  4     2
// four two

main() {
   string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   numToWords(words, 101);

}