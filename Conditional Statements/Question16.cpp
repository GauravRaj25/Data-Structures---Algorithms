#include <bits/stdc++.h>
using namespace std;

// Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’. 
int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if(ch >='a' && ch <='m'){
     cout << "The character lies between a and m";
    }

    else if (ch >='n' && ch <='z'){
        cout << "The character lies between n and z";
    }
    else{
        cout << "Not lies anywhere";
    }
    return 0;
}