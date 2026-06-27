#include <bits/stdc++.h>
using namespace std;

// Print the sum of first n natural numbers. 
int main() {
    int sum = 0;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        sum+=i;
    }
    cout << sum;
    return 0;
}