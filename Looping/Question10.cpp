#include <bits/stdc++.h>
using namespace std;

// Find the sum of digits of a number.
int main() {
    int num, sum = 0;
    cout << "Enter the number: ";
    cin >> num;

    while(num>0){
        int ld = num % 10;
        sum+=ld;
        num/=10;
    }
    cout << "Sum of digits of number: " << sum;
    return 0;
}