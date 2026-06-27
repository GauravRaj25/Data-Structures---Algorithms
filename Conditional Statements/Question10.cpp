#include <bits/stdc++.h>
using namespace std;

// Take a character and check whether it’s uppercase, lowercase, a digit, or a special character 
int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout << "UpperCase";
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout << "LowerCase";
    }
    else if(ch >= '0' && ch <= '9'){
        cout << "Digit";
    }
    else{
        cout << "Special Character";
    }
    return 0;
}