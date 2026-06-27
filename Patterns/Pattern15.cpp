#include <bits/stdc++.h>
using namespace std;

int main() {
    // Mix Pyramid

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int r=0; r<n; r++){
        // 1. For Stars
        for(int c=0; c<n-r; c++){
            cout << "* ";
        }
         
        //  For Spaces
        for(int c=0; c<(2*r+1); c++){
            cout << "  ";
        }

        //  For Stars
        for(int c=0; c<n-r; c++){
            cout << "* ";
        }
        
        cout << endl;

    }

    for(int r=0; r<n; r++){
        for(int c=0; c<r+1; c++){
            cout << "* ";
        }

        for(int c=0; c<(2*n-(2*r+1)); c++){
            cout << "  ";
        }

        for(int c=0; c<r+1; c++){
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}