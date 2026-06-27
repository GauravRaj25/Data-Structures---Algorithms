#include <bits/stdc++.h>
using namespace std;

// Take marks (0–100) and print the corresponding grade (A/B/C/D/F). 
int main() {
    int marks;
    cout << "Enter the Marks: ";
    cin >> marks;

    if(marks >= 90 && marks <= 100){
        cout << "Garde: A";
    }
    else if(marks >= 80 && marks < 90){
        cout << "Garde: B";
    }
    else if(marks >=70 && marks < 80){
        cout << "Grade: C";
    }
    else if(marks >=60 && marks < 70){
        cout << "Grade: D";
    }
    else{
        cout << "Grade: F";
    }
    return 0;
}