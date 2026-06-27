#include <bits/stdc++.h>
using namespace std;

int main() {

    // Diamond
    
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

            if(row==0 || col==0 || col==row+1-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;

    }


    for(int row=0; row<n; row++){

        // For Spaces
        for(int col=0; col<row; col++){
            cout << " ";
        }

        // For Stars
        for(int col=0; col<n-row; col++){
            if(row==n-1 || col==0 || col==n-row-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}