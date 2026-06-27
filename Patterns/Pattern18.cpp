#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int r=0; r<n; r++){
        char ch = 'A';
        for(int c=0; c<r+1; c++){
            cout << ch;
            ch++;
        }

        ch --;

        while(ch > 'A'){
            ch --;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}