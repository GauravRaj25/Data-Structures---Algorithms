#include <bits/stdc++.h>
using namespace std;

// Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.
int main() {
    int a,b;
    cout << "Enter the numbers: ";
    cin >> a >> b;

    if(a%2==0 && b%2==0){
        cout << "Both numbers are even";
    }
    else if(a%2!=0 && b%2!=0){
        cout << "Both numbers are odd";
    }
    else {
        cout << "One Number is Even and the other is odd";
    }
    return 0;
}