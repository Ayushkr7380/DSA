#include<iostream>
#include<climits>  // For INT_MIN
using namespace std;

// Function to find the largest element in the array
int largest(int arr[], int s) {
    int l = INT_MIN;  // Initialize with the smallest possible integer

    for (int i = 0; i < s; i++) {
        if (arr[i] > l)  // If current element is greater than current largest
            l = arr[i];  // Update the largest
    }

    return l;  // Return the largest element
}

int main() {
    int arr[] = {12, 123, 4, 1};  // Input array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    int l = largest(arr, size);  // Call function to get largest element

    cout << "Largest element is " << l;  // Output the result

    return 0;
}
