#include <bits/stdc++.h>
using namespace std;

// Take a number and print whether it is postive, negative or zero.
int main() {
    int num;
    cout << "Enter  the number: ";
    cin >> num;

    if(num>0){
        cout << "It is Positive Number";
    }
    else if(num<0){
        cout << "It is Negative Number";
    }
    else{
        cout << "Zero";
    }

    return 0;
}