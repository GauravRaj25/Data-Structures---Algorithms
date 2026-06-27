#include <bits/stdc++.h>
using namespace std;

//Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions. 
int main() {
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp<20){
        cout << "Cold";
    }
    else if(temp>=20 && temp<=30){
        cout << "Warm";
    }
    else{
        cout << "Hot";
    }
    return 0;
}