//You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

//Note: The answer should be returned in an increasing format.

//Examples:

//Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
//Output: [5, 6]
//Explanation: 5 and 6 occur more n/3 times.

//Input: arr[] = [1, 2, 3, 4, 5]
//Output: []
//Explanation: o candidate occur more than n/3 times.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,12,12,3,3,3,3,3,3,12,12,5,4,3,};

    vector<pair<int,int>> freq;

    vector<int> result;

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<size;i++){
        bool check = false;

        for(int j = 0;j<i;j++){
            if(arr[j] == arr[i]){
                check = true;
                break;
            }
        }

        if(check) continue;

        int count = 1;
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        freq.push_back({arr[i],count});

    }


    for(int j=0;j<freq.size();j++){
        if(freq[j].second > size / 3){
            result.push_back(freq[j].first);
        }
        
    }
    if(result.size() == 0){
        cout<<"[]"<<endl;
    }
    
    sort(result.begin(),result.end());

    for(int j=0;j<result.size();j++){
        
        
            cout<<result[j]<<" ";
        
    }

    
    return 0;
}