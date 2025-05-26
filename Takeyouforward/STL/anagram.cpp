#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> arr = {"cat","atc","tac","bat"};
    bool flag;
    for(int i=0;i<4;i++){
        sort(arr[i].begin() , arr[i].end());
    }

    for(int i=0;i<4;i++){
        if(arr[i] == arr[0]){
            flag = true;
        }
        else{
            flag = false;
            cout<<"Given array is not anagram."<<endl;
            return 0;
        }
    }

    if(flag){
        cout<<"Given array is anagram."<<endl;
    }

    return 0;
}