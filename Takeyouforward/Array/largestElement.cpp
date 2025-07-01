#include<iostream>
#include<climits>
using namespace std;

int largest(int arr[],int s){
    int l = INT_MIN;
    for(int i=0;i<s;i++){
        if(arr[i] > l) l = arr[i];
    }

    return l;
}

int main(){
    int arr[] = {12,123,4,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int l = largest(arr,size);

    cout<<"Largest element is "<<l;

    return 0;
}