#include <bits/stdc++.h>
using namespace std;

// Print all even numbers between 1 and 100. 
int main() {
    for(int i=1; i<100; i++){
        if(i%2==0){
            cout << "Even Numbers between 1 and 100 are: " << i << endl;
        }
    }
    return 0;
}