#include <bits/stdc++.h>
using namespace std;

// Check if a number is a perfect number. 
int main() {
    int n ;
    cout << "Enter the n: ";
    cin >> n;
    
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n && n!=0){
        cout << "Perfect number";
    }
    else{
        cout << "It is not Perfect Number";
    }
    return 0;
}