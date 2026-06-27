#include <bits/stdc++.h>
using namespace std;

//Take three numbers and print the largest
int main() {
    int num1, num2, num3;
    cout << "Enter the num1: ";
    cin >> num1;

    cout <<"Enter the num2: ";
    cin >> num2;

    cout << "Enter the num3: ";
    cin >> num3;

   if(num1>=num2 && num1>=num3){
    cout << "Largest number is: " << num1;
   }
   else if(num2>=num3 && num2>=num1){
    cout << "Largest number is: " << num2;
   }
    else{
        cout << "Largest number is: " << num3;
    }
    return 0;
}