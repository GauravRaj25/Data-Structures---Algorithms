#include <bits/stdc++.h>
using namespace std;

// Print the factorial of a given number. 
int main() {
    int n;
    int fact = 1;
    cout << "Enter the n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout << "Factorial of num: " << fact;

    return 0;
}