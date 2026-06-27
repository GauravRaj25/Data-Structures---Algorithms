#include <bits/stdc++.h>
using namespace std;

// Decimal To Binary Conversion using Division Method

// int BinaryToDecimalConversion(int n){
//     int binaryNo = 0;
//     int i = 0;

//     while(n>0){
//         int bit = n%2;
//         binaryNo= bit * pow(10, i++) + binaryNo;
//         n = n / 2;

//     }
//     return binaryNo;

    // Decimal To Binary Conversion using Btwise Method

    int BinaryToDecimalConversion(int n){
    int binaryNo = 0;
    int i = 0;

    while(n>0){
        int bit = (n & 1);
        binaryNo= bit * pow(10, i++) + binaryNo;
        n = n >> 1;

    }
    return binaryNo;



}

int main() {
    int n;
    cout << "Enter the n: ";
    cin >> n;

    int binary = BinaryToDecimalConversion(n);
    cout << "Binary Representation is: " << binary;
    return 0;
}