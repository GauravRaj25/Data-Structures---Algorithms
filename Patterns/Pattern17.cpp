#include <bits/stdc++.h>
using namespace std;

int main() {
    // Full Fancy 12
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int r=0; r<n; r++){
        for(int c=0; c<2*r+1; c++){
            if(c%2 == 0){
                cout << r + 1;
            }

            else{
                cout << " * ";
            }
        }

        cout << endl;
    }

    n--;

    for(int r=0; r<n; r++){
        for(int c=0; c<(2*n-2*r-1); c++){
            if(c%2 == 0){
                cout << n-r;
            }
            else{
                cout << " * ";
            }

        }
        cout << endl;
    }
    return 0;
}