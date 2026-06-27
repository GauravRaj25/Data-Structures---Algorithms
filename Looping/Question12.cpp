#include <bits/stdc++.h>
using namespace std;

// Print all divisors
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Divisors are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}