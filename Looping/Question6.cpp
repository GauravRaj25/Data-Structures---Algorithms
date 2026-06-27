#include <bits/stdc++.h>
using namespace std;

//  Print the product of digits of a given number. 
int main() {
    int n, product = 1 ;
    cout << "Enter the n: ";
    cin >> n;

    while(n!=0){
        int digit = n % 10;
        product = product * digit;
        n /= 10;
    }

    cout << "Product of Digits: " << product;
    return 0;
}