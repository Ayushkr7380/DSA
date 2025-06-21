#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot = arr[start];
    int count = 0;
    
    for(int i = start+1;i<=end;i++){
        if(pivot >= arr[i]) count++;
    }

    //Place pivot at the right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex],arr[start]);

    //Place all element smaller than pivot at left side and larger elements are at right side.
    int i = start,j = end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}
void quickSort(int arr[] , int start , int end){
    
    //Base case
    if(start>=end) return;

    //Create Partition
    int p = partition(arr,start,end);

    //Sort left side
    quickSort(arr,start,p-1);

    //Sort right side
    quickSort(arr,p+1,end);
}
int main(){
    int arr[] = {12,1,567,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before quick sort : "<<endl;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<""<<endl;
    quickSort(arr, 0 , size - 1);

    cout<<"After quick sort : "<<endl;
    for(int ele : arr){
        cout<<ele<<" ";
    }
}