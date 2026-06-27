#include <bits/stdc++.h>
using namespace std;

int main() {
    // Reverse the Number

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int revNum = 0;
    while(n>0){
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }

    cout << "Reverse Number is: " << revNum;
    return 0;
}