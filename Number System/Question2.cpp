#include <bits/stdc++.h>
using namespace std;

// Binary to Decimal Conversion 

int BinaryToDecimalConversion(int n){
    int decimal = 0;
    int i = 0;
    
    while(n){
        int bit = n % 10;
        decimal = decimal + bit * pow(2,i++);
        n = n / 10;
    }
    return decimal;
}
int main() {
    int n;
    cout << "Enter the n: ";
    cin >> n;

    int ans = BinaryToDecimalConversion(n);
    cout << "Decimal Representation is: " << ans;

    return 0;
}