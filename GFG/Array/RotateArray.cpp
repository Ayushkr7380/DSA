#include <bits/stdc++.h>
using namespace std;

// Function to reverse elements in the array from index 'start' to 'end'
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]); // Swap the elements
        start++;
        end--;
    }
}

int main() {
    // Initialize the array
    int arr[] = {12, 4, 5, 34, 23, 7, 8, 3, 2, 4};

    // Variable to store number of steps to rotate
    int d;

    // Calculate array length
    int ArrLen = sizeof(arr) / sizeof(arr[0]);

    // Ask user to input the number of steps for rotation
    cout << "Enter steps: ";
    cin >> d;

    // To handle if d > ArrLen
    d = d % ArrLen;

    // Display array before rotation
    cout << "Before: ";
    for (int i = 0; i < ArrLen; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // *** Reversal Algorithm for Array Rotation ***
    // Step 1: Reverse the first d elements
    reverseArray(arr, 0, d - 1);

    // Step 2: Reverse the remaining elements from d to end
    reverseArray(arr, d, ArrLen - 1);

    // Step 3: Reverse the entire array
    reverseArray(arr, 0, ArrLen - 1);

    // Display array after rotation
    cout << "After: ";
    for (int i = 0; i < ArrLen; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
