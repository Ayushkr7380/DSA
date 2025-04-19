#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    //In this time complexity would be O(n^2). --> Worst Case and Average Case.
    
    // for(int i=size-1;i>=0;i--){
    //     for(int j=0;j<=i-1;j++){
    //         if(arr[j] > arr[j+1]){
    //             int temp = arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    //In this time complexity would be O(n). --> Best Case
    for(int i=size-1;i>=0;i--){
        int didSwap = 0;
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}
int main(){

    int arr[] = {12,1,45,4,12};
    int size =  sizeof(arr) / sizeof(arr[0]);
    cout<<"Before bubble sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    bubbleSort(arr,size);
    cout<<"After bubble sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}