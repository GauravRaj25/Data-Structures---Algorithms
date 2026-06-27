#include <bits/stdc++.h>
using namespace std;

// Find the maximum element in array
int main() {
    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout << "Minimum Element is: " << min;

    return 0;
}