#include <bits/stdc++.h>
using namespace std;

// Print the sum of all even numbers up to n.
int main() {
    int n, sum = 0;
    cout << "Enter the n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout << sum ;
    return 0;
}