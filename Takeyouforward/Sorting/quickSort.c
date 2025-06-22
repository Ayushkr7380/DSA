#include<stdio.h>
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int count = 0;
    for(int i=low+1;i<=high;i++){
        if(pivot >= arr[i]) count++;
    }

    //Place pivot at right place
    int pivotIndex = low + count;

    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[low];
    arr[low] = temp;
    

    //Place all elements smaller than pivot at left side and all elements larger at the right side.
    int i = low , j = high;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int low,int high){
    //Base case
    if(low >= high) return;

    //Create parition
    int p = partition(arr,low,high);

    //Sort the left side of the parition
    quickSort(arr,low,p-1);

    //Sort the right side of the parition
    quickSort(arr,p+1,high);
}

int main(){
    int arr[] = { 12, 1, 445, 3, 312};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\nBefore Quick Sort : ");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }

    quickSort(arr,0,size-1);

    printf("\nAfter Quick Sort : ");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}