#include <iostream>
using namespace std;

int main() {
    int hour, minute;

    cout << "Enter hour (0-23): ";
    cin >> hour;
    cout << "Enter minute (0-59): ";
    cin >> minute;

    // Check valid time
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Invalid time";
    }
    else {
        if (hour < 12)
            cout << "AM";
        else
            cout << "PM";
    }

    return 0;
}
