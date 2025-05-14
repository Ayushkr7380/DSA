#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector after push_back: ";
    for (int num : v) {
        cout << num << " ";
    }

    v.pop_back();

    cout << "\nVector after pop_back: ";
    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}
