#include <bits/stdc++.h>
using namespace std;

int main() {
    // Prime Number
    int n;
    cout << "Enter the num: ";
    cin >> n;

    if(n <= 1){
        cout << "Not Prime";
        return 0;
    }

    bool isPrime = true;

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}