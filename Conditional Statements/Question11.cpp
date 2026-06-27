#include <bits/stdc++.h>
using namespace std;

// Take three sides and check if they form a valid triangle.
int main() {
    int a, b, c;
    cout << "Enter the three sides: ";
    cin >> a >> b >> c;

    if(a+b>c && b+c>a && a+c>b){
        cout << "Valid Triangle";
    }
    else{
        cout << "Invalid Triangle";
    }
    return 0;
}