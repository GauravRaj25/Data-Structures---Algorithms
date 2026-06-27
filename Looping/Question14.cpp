#include <bits/stdc++.h>
using namespace std;

// Check if a number is prime or not. 
int main() {
    int n ;
    cout << "Enter the n: ";
    cin >> n;

    if(n <= 1){
        cout << "Not Prime Number";
    }

    bool isPrime = true;

    for(int i=2; i<=n/2; i++){
       if(n % i == 0){
        isPrime = false;
        break;
       }
    }

    if(isPrime){
        cout << "Prime Number";
    }

    else{
        cout << "Not Prime Number";
    }
    return 0;
}