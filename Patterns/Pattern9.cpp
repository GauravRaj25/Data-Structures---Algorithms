#include <bits/stdc++.h>
using namespace std;

int main() {
    // Full Pyramid

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int row=0; row<n; row++){

        // 1. For Spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        
        // 2. For Stars
        for(int col=0; col<row+1; col++){
            cout << "* ";
        }
        cout << endl;

    }
    return 0;
}