#include <bits/stdc++.h>
using namespace std;

// Check if a number is an Armstrong number
int main() {
    int num;
    int sum = 0;
    cout << "Enter the num: ";
    cin >> num;

    int original = num;

    while(num>0){
        int ld = num % 10;
        sum += ld * ld * ld;
        num/=10;
    }
    if(sum == original){
        cout << "Armstrong number";
    }
    else
        cout << "Not an Armstrong number";
    
    return 0;
}