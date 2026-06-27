#include <bits/stdc++.h>
using namespace std;

// Check if one of two given numbers is a multiple of the other.
int main() {
   int a, b;
   cout << "Enter the numbers: ";
   cin >> a >> b;
   
   if(a%b==0){
    cout << a << " is a multiple of " << b;
   }
    else if(b%a==0){
    cout << b << " is a multiple of " << a;
    }
   
    return 0;
}