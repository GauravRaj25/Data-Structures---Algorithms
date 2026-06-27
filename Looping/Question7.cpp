#include <bits/stdc++.h>
using namespace std;

// Count the number of digits in a given number.
int main() {
    int n ;
    int count = 0;
    cout << "Enter the n: ";
    cin >> n;
    
    while(n!=0){
        int d = n % 10;
        count ++;
        n/=10;
    }
    
    cout << "Number of Digits: " << count;
    return 0;
}