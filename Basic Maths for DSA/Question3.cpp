#include <bits/stdc++.h>
using namespace std;

int main() {
    // Palindrome Number

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int original = n;
    int revNum = 0;

    while(n>0){
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }

    if(revNum == original){
        cout << "It is Palindrome number";
    }
    else{
        cout << "It is not Palindrome number";
    }
    
    return 0;
}