#include <bits/stdc++.h>
using namespace std;

int main() {
    // Numeric Hollow Half Pyramid

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int r=0; r<n; r++){
        for(int col=0; col<=r; col++){
            if(col==r || col == 0 || r == n-1){
                cout << col + 1;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}