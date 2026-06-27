#include <bits/stdc++.h>
using namespace std;

int main() {
    // Armstrong Number

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int original = n;
    int sum = 0;
    while(n>0){
        int ld = n % 10;
        sum+= ld * ld * ld;
        n = n / 10;
    }

    if(original == sum){
        cout << "It is Armstrong Number";
    }

    else{
        cout << "It is not Armstrong Number";
    }
    return 0;
}