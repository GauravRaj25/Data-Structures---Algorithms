#include <bits/stdc++.h>
using namespace std;

// Take a 3-digit number and check if all digits are distinct. 
int main() {
    int num ;
    cout << "Enter the num: ";
    cin >> num;

    int d1 = num/100;
    int d2 = (num/10)%10;
    int d3 = num%10;

    if(d1!=d2 && d2!=d3 && d1!=d3){
        cout << "All the digits are distinct";
    }
    else{
        cout << "Digits are not distinct";
    }

    
    return 0;
}