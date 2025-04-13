#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 5, 2};

    vector<int> temp=arr;
    

    

    //Next Permutation
    next_permutation(temp.begin(),temp.end());

    for(int num : temp) cout<< num<<" "; 

    return 0;
}
