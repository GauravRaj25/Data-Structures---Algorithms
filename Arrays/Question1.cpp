#include <bits/stdc++.h>
using namespace std;

// Linear Search
bool linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main() {
    int n, key;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    if(linearSearch(arr, n, key)){
        cout << "Element Found";
    }
    else{
        cout << "Elementy not Found";
    }
    return 0;
}