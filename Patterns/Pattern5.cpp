#include <bits/stdc++.h>
using namespace std;

int main() {
    // Hollow Half Pyramid

    int n ;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            if(row==1 || row==0 || row==n-1 || col==0 || col==row){
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