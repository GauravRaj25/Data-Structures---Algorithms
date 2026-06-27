#include <bits/stdc++.h>
using namespace std;

// Check the year whether it is a leap year or not
int main() {
    int year;
    cout << "Enter the num: ";
    cin >> year;

    if((year%400==0)||(year%4==0 && year%100!=0)) {
        cout << "Leap Year";
    }
    else{
        cout << "Not a Leap Year";
    }
    return 0;
}