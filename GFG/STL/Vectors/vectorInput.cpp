#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "You entered:\n";
    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}
