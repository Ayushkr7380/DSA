#include<stdio.h>
void merge(int arr[],int low,int mid,int high){
    int left = low;
    int right = mid + 1;
    int temp[high - low + 1];
    int index = 0;

    //Merge two sorted array
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

    //Copy remaining element from the left side
    while(left <= mid){
        temp[index] = arr[left];
        left++;
        index++;
    }

    //Copy remaining element from the right side
    while(right <= high){
        temp[index] = arr[right];
        right++;
        index++;
    }

    //Copy sorted element back to the original array.
    for(int i=0;i<index;i++){
        arr[low + i] = temp[i];
    }

}
void mergeSort(int arr[],int low,int high){
    
    if(low >= high) return;  //Base case.
    
    int mid = (low + high) / 2;  //Middle index.

    mergeSort(arr,low,mid); //Sort the left side of the middle index.

    mergeSort(arr,mid+1,high); //Sort the right side of the middle index.
    
    merge(arr,low,mid,high); // Merge two sorted array
}
int main(){
    int arr[] = {11, 1,43, 4, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nBefore Merge Sort : \n");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }

    mergeSort(arr,0,size-1);

    printf("\nAfter Merge Sort : \n");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }

    return 0;
}