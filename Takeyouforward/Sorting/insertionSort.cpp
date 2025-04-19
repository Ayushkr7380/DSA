#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for(int i=0;i<=size - 1;i++){
        int j = i;
        
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

int main(){
    int arr[]={1,2,34,3,56};
    int size = sizeof(arr) / sizeof(arr[0]);

    //Before sorting
    cout<<"Before insertion sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //sorting function
    insertionSort(arr,size);

    //After sorting
    cout<<"After insertion sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0; //It tells the successful execution of program.
}