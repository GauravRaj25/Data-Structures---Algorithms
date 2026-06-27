#include <bits/stdc++.h>
using namespace std;

// Print the reverse of a given number.
int main() {
    int num, revnum = 0;
    cout << "Enter the number: ";
    cin >> num;

    while(num>0){
        int ld = num%10;
        num/= 10;
        revnum = (revnum*10) + ld;
    }
    cout << "Reverse number: " << revnum;

    return 0;
}