#include<iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int size) {
    // Loop over each element starting from the first
    for(int i = 0; i <= size - 1; i++) {
        int j = i;

        // Compare and shift elements to the right to insert arr[i] at correct position
        while(j > 0 && arr[j - 1] > arr[j]) {
            // Swap arr[j] and arr[j-1]
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--; // Move one step back
        }
    }
}

int main() {
    // Input array
    int arr[] = {1, 2, 34, 3, 56};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    // Before sorting
    cout << "Before insertion sort: " << endl;
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    // Call sorting function
    insertionSort(arr, size);

    // After sorting
    cout << "After insertion sort: " << endl;
    for(int ele : arr) {
        cout << ele << " ";
    }

    return 0; // It indicates successful program execution
}
