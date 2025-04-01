#include <bits/stdc++.h>
using namespace std;

// Function to reverse a portion of the array
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {12, 4, 5, 34, 23, 7, 8, 3, 2, 4};
    int d;
    int ArrLen = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter steps: ";
    cin >> d;
    d = d % ArrLen; // Handle cases where d >= ArrLen

    cout << "Before: ";
    for (int i = 0; i < ArrLen; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 1: Reverse the first d elements
    reverseArray(arr, 0, d - 1);

    // Step 2: Reverse the remaining elements
    reverseArray(arr, d, ArrLen - 1);

    // Step 3: Reverse the entire array
    reverseArray(arr, 0, ArrLen - 1);

    cout << "After: ";
    for (int i = 0; i < ArrLen; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
