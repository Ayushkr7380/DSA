#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,3,46,123,3};
    int arraySize = sizeof(arr) / sizeof(arr[0]);

    cout<<"Before reverse : "<<endl;
    for(int i=0;i<arraySize;i++){
        cout << arr[i] << " ";
    }

    cout<<""<<endl;

    //Reverse Array Logic
    for(int i=0;i<arraySize/2;i++){
        int temp = arr[i];
        arr[i] = arr[arraySize - 1 - i];
        arr[arraySize - 1 - i] = temp;
    } 

    cout<<"After reverse : "<<endl;
    for(int i=0;i<arraySize;i++){
        cout << arr[i] << " ";
    }

    return 0;
}