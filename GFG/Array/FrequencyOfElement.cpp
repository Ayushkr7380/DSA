#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,12,3,4,4,3,1,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<pair<int,int>> result;
    for(int i = 0;i<size;i++){
        bool alreadyCounted = false;

        for(int k=0;k<i;k++){
            if(arr[i] == arr[k]){
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted) continue;

        int count = 1;
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j]){
                count++; 
            }
        }
        result.push_back({arr[i],count});
    }

    for(int i=0;i<result.size();i++){
        cout<<result[i].first<<" - "<<result[i].second<<endl;
    }


    return 0;
}