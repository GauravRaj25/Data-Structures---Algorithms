#include <bits/stdc++.h>
using namespace std;

// Check if a number is a palindrome.
int main() {
    int n, num, rev = 0;
    cout << "Enter the number: ";
    cin >> n;

    num = n;

    while(n>0){
        int ld = n%10;
        n/=10;
        rev = (rev*10) + ld;
    }
    if(num == rev){
        cout << "Palindrome number";
    }
    else
        cout << "Not a palindrome number";
    return 0;
}