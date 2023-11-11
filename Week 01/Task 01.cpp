#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    constexpr int SIZE = 100;
    bool numbers[SIZE] = {false};  // Initialize an array to keep track of numbers

    cout << "Enter numbers from 1 to " << n << " (0 to stop): ";
    int num;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num >= 1 && num <= n) {
            numbers[num - 1] = true;  // Mark the entered number as found 
        }
        else {
            cout << "Invalid input. Enter numbers from 1 to " << n << ": ";
        }
    }

    int missingNumber = -1;
    for (int i = 0; i < n; i++) {
        if (!numbers[i]) { 
            missingNumber = i + 1;  // The first missing number
            break;
        }
    }

    if (missingNumber != -1) {
        cout << "The first missing number k between 1 and " << n << " is: " << missingNumber << endl;
    }
    else {
        cout << "No missing numbers found between 1 and " << n << endl;
    }

    return 0;
}
