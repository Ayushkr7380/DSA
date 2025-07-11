#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main() {
    // Initialize the array
    int arr[] = {12, 3, 46, 123, 3};

    // Calculate the size of the array
    int arraySize = sizeof(arr) / sizeof(arr[0]);

    // Print the array before reversing
    cout << "Before reverse : " << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array in-place
    // Swap the ith element with the (size-1-i)th element
    for (int i = 0; i < arraySize / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[arraySize - 1 - i];
        arr[arraySize - 1 - i] = temp;
    }

    // Print the array after reversing
    cout << "After reverse : " << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
