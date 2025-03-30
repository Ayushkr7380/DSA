#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,4,2,0,2,3};
    int lengthOfArray = sizeof(arr) / sizeof(arr[0]);

    cout<<"Before Moving All zeros to end : "<<endl;

    for(int i=0;i<lengthOfArray;i++){
        cout << arr[i] << " ";
    }

    cout<<""<<endl;

    int j = 0;
    for(int i=0;i<lengthOfArray;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    cout<<"After Moving All zeros to end : "<<endl;

    for(int i=0;i<lengthOfArray;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}