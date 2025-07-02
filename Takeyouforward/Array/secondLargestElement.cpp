#include<iostream>
#include<climits>  // For INT_MIN

using namespace std;

// Function to find the second largest element in the array
int secondLargest(int arr[], int s) {
    int lst = INT_MIN;   // Initialize largest element as the smallest possible integer
    int s_lst = INT_MIN; // Initialize second largest similarly

    for (int i = 0; i < s; i++) {
        // If current element is greater than the current largest
        if (arr[i] > lst) {
            s_lst = lst;      // Update second largest
            lst = arr[i];     // Update largest
        }
        // If current element is less than largest but greater than second largest
        else if (arr[i] > s_lst && arr[i] != lst) {
            s_lst = arr[i];   // Update second largest
        }
    }

    // If no valid second largest found (all elements equal or only one unique)
    if (s_lst == lst) return 0;
    else return s_lst;
}

int main() {
    int arr[] = {1, 12, 10, 11, 1};              // Input array
    int size = sizeof(arr) / sizeof(arr[0]);     // Calculate size of array

    int s_lst = secondLargest(arr, size);        // Get second largest

    // Display result
    if (s_lst)
        cout << "Second largest element is " << s_lst << endl;
    else
        cout << "No second largest element." << endl;

    return 0;
}
