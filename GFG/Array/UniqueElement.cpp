#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,12,54,76,44,44};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i,j;
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(arr[i] == arr[j] && i!=j){
                break;
            }
        }
        if(j == len){
            cout<<arr[i]<<" is the unique element."<<endl;
        }
    }
    return 0;
}