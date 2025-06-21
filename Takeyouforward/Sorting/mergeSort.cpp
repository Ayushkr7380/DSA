#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    //[ low --> mid ]
    //[ mid + 1 --> high ]
    int temp[high - low + 1];
    int index = 0;
    int left = low;
    int right = mid + 1;

    // Merge two sorted parts
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp[index] = arr[left];
            left++;
            index++;
        }
        else{
            temp[index] = arr[right];
            right++;
            index++;
        }
    }

    // Copy remaining elements from left side
    while(left <= mid){
        temp[index] = arr[left];
        left++;
        index++;
    }

    //Copy remaining elements from right side
    while(right <= high){
        temp[index] = arr[right];
        right++;
        index++;
    }

    //Copy sorted element back to original array
    for(int i=0;i<index;i++){
        arr[low + i] = temp[i]; 
    }
}
void mergeSort(int arr[],int low,int high){
    
    //Base case
    if(low >= high) return;

    //Midldle index
    int mid = (low + high) / 2;

    //Sort left side array
    mergeSort(arr,low,mid);

    //Sort right side array
    mergeSort(arr,mid+1,high);

    //Merge both left and right sorted array
    merge(arr,low,mid,high);
}
int main(){
    int arr[] = {1,234,2,56,32};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Before Merge Sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    mergeSort(arr,0,size - 1);

    cout<<"After Merge Sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }

    return 0;
}