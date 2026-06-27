#include <bits/stdc++.h>
using namespace std;

// Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither. 

int main() {
    int num ;
    cout << "Enter the num: ";
    cin >> num;

    int first = num/100;
    int middle = (num/10)%10;
    int last = num%10;
    
    if(middle > first && middle > last){
        cout << "Middle digit is the largest";
    }
    else if(middle < first && middle < last){
        cout << "Middle digit is the smallest";
    }
    else{
        cout << "Middle digit is neither smallest nor larger";
    }

    return 0;
}