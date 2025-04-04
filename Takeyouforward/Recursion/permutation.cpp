#include <bits/stdc++.h>
using namespace std;

void findPermutation(vector<int> &arr, vector<int> &ds, vector<bool> &temp) {
    if (ds.size() == arr.size()) {  // Base case: If the current permutation is complete
        for (int num : ds)
            cout << num << " ";
        cout << endl;
        return;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (!temp[i]) {  // If the element is not already picked
            temp[i] = true;
            ds.push_back(arr[i]);

            findPermutation(arr, ds, temp);

            ds.pop_back(); // Backtrack
            temp[i] = false;
        }
    }
}

int main() {
    vector<int> arr = {1, 5, 2};
    vector<int> ds;
    vector<bool> temp(arr.size(), false);

    findPermutation(arr, ds, temp);

    return 0;
}
