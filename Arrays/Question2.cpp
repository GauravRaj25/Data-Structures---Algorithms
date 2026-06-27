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
    int max = INT_MIN;
    
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout << "Maximum Element is: " << max;

    return 0;
}