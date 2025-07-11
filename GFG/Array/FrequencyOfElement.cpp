#include <bits/stdc++.h> // Includes all standard headers
using namespace std;

int main() {
    // Initialize an array with duplicate elements
    int arr[] = {12, 12, 3, 4, 4, 3, 12};

    // Calculate size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Vector to store the result as pairs of (element, frequency)
    vector<pair<int, int>> result;

    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        bool alreadyCounted = false;

        // Check if the current element has already been processed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }

        // If already counted, skip to the next element
        if (alreadyCounted) continue;

        // Count how many times arr[i] appears in the rest of the array
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Store the element and its count in the result vector
        result.push_back({arr[i], count});
    }

    // Print the frequency of each unique element
    for (int i = 0; i < result.size(); i++) {
        cout << result[i].first << " - " << result[i].second << endl;
    }

    return 0;
}
