#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[],int start,int end){
    if(start>=end) return;

    swap(arr[start],arr[end]);
    

    ReverseArray(arr,start+1,end-1); 

}
int main(){
    int arr[]={1,23,3,4,45};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before reverse : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    ReverseArray(arr,0,size-1);

    cout<<endl;
    cout<<"After reverse : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}