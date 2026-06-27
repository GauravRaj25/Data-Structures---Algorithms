#include <bits/stdc++.h>
using namespace std;

int main() {
    // Inverted Pyramid
    
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    for(int row=0; row<n; row++){

        // For Spaces
        for(int col=0; col<row; col++){
            cout << " ";
        }

        // For Stars
        for(int col=0; col<n-row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}