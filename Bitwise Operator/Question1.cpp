#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the n: ";
    cin >> n;

    int setBitcount = 0;

    while(n != 0){
       int lastBit = (n & 1);
       if(lastBit == 1){
        setBitcount++;
       }

       n = n >> 1;
    }


    cout << "Total set bit Count: " << setBitcount;
    return 0;
}

