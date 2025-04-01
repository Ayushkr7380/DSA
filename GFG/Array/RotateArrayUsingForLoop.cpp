// Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,4,5,34,23,7,8,3,2,4};
    int d;
    int ArrLen = sizeof(arr) / sizeof(arr[0]);

    cout<< "Enter steps : ";
    cin >> d;

    cout<< "Before : "<<endl;
    for(int i=0;i<ArrLen;i++){
        cout<<arr[i]<< " ";
    }

    cout<<""<<endl;

    //Using Reversal algorithm


    for(int i=0;i<d/2;i++){
        int temp = arr[i];
        arr[i] = arr[d - 1 - i];
        arr[d - 1 - i] = temp;
    }

    
    for(int i=d;i<(d + ArrLen) / 2;i++){
        int temp = arr[i];
        arr[i] = arr[(d + ArrLen) - 1 - i];
        arr[(d + ArrLen) - 1 - i] = temp;
    }

    for(int i=0;i<ArrLen/2;i++){
        int temp = arr[i];
        arr[i] = arr[ArrLen - 1 - i];
        arr[ArrLen - 1 - i] = temp;
    }

    cout<< "After : "<<endl;
    for(int i=0;i<ArrLen;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}