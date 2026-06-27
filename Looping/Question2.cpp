#include <bits/stdc++.h>
using namespace std;

// Print the table of a given number (n × 1 to n × 10). 
int main() {
    int n ;
    cout << " Enter the value of n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << n * i << endl;
    }
    
    return 0;
}