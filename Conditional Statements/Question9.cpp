#include <bits/stdc++.h>
using namespace std;

// Take a character and check if it’s a vowel or consonant. 
int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if(ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u'){
        cout << "It is a vowel character";
    }
    else{
        cout << "Consonant";
    }
    return 0;
}