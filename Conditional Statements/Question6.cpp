#include <bits/stdc++.h>
using namespace std;

//Take two numbers and print the larger one. 
int main() {
    int num1, num2;
    cout << "Enter the num1: ";
    cin >> num1;

    cout <<"Enter the num2: ";
    cin >> num2;

    if(num1>num2){
        cout << "Num1 is the largest";
    }
    else{
        cout << "Num2 is the largest";
    }
    return 0;
}