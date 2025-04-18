#include<iostream>
using namespace std;
void selectionSort(int arr[],int size){
    for(int i=0;i<=size - 2;i++){
        int minEle = i;
        for(int j=i;j<=size - 1;j++){
            if(arr[j] < arr[minEle]){
                minEle = j;
            }
        }
        int temp = arr[minEle];
        arr[minEle] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[]={1,2,34,3,56};
    int size = sizeof(arr) / sizeof(arr[0]);

    //Before sorting
    cout<<"Before selection sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //sorting function
    selectionSort(arr,size);

    //After sorting
    cout<<"After selection sort : "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0; //It tells the successful execution of program.
}