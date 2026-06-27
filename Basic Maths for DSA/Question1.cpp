#include <bits/stdc++.h>
using namespace std;

int main() {
    // Count Digits
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int cnt = 0;

    while(n>0){
       int lastDigit = n % 10;
       cnt++;
       n = n / 10;
    }

    cout << "Count Digits are: " << cnt;
    return 0;
}