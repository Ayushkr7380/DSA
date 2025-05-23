//Find the frequency of each element in an array
//Using c++ stl -- map data structure

#include<bits/stdc++.h>
using namespace std;

void findFreq(int arr[],int size){
    map<int,int> freq;

    for(int i=0;i<size;i++){
        freq[arr[i]]++;
    }

    for(auto i : freq){
        cout<<i.first<<" appears "<<i.second<<" times"<<endl;
    }
}
int main(){
    int arr[]= {1,1,2,3,45,4,45};

    int size = sizeof(arr)/sizeof(arr[0]);

    findFreq(arr,size);

    return 0;
}