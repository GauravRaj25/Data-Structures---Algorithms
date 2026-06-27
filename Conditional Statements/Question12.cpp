#include <bits/stdc++.h>
using namespace std;

// If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.
 int main() {
    int a, b, c;
    cout << "Enter the three sides: ";
    cin >> a >> b >> c;

    if(a+b>c && b+c>a && a+c>b){
       

        if(a==b && b==c){
            cout << "Equilateral Triangle";
        }
        else if(a==b || b==c || a==c){
            cout << "Isosceles Triangle";
        }
        else{
            cout << "Scalene Triangle";
        }
    }
    else{
        cout << "Invalid Triangle";
    }
    return 0;
}