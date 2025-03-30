#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,4,5,32,56};
    int LE = INT_MIN; // LE = LargestElement
    int SLE = INT_MIN; // SLE = SecondLargestElement

    int arrSize = sizeof(arr)/sizeof(arr[0]);

    if(arrSize < 2) return -1;

    for(int i=0;i<arrSize;i++){
        if(arr[i] > LE){
            SLE = LE;
            LE = arr[i];
        }
        else if(arr[i] > SLE && arr[i] != LE){
            SLE = arr[i];
        }
    }

    if(SLE == INT_MIN){
        return -1;
    }
    else{
        cout << "Second largest element is : "<<SLE<<endl;
    }
}