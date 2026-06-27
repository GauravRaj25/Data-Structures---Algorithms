#include <bits/stdc++.h>
using namespace std;

// Take a 4-digit number and check if the first and last digits are equal. 
int main() {
    int num ;
    cout << "Enter the num: ";
    cin >> num;

    int first = num/1000;
    int last = num%10;

    if(first == last){
        cout << "First and Last digit are euqal";
    }
    else{
        cout << "First and Last digit are not equal";
    }
    return 0;
}