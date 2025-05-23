//Find frequency of each element using array hashing..
#include<bits/stdc++.h>
using namespace std;
void findFreq(int arr[],int size){
    int maxVal = *max_element(arr, arr+size);

    cout<<"MaxVal ->"<<maxVal<<endl;
    
    int hashArray[maxVal + 1] = {0};

    for(int i=0;i<size;i++){
        hashArray[arr[i]]++;
    }

    for(int i=0;i<=maxVal;i++){
        if (hashArray[i] > 0) {
            cout << i << " appears " << hashArray[i] << " times\n";
        }
    }
    
}

int main(){
    int arr[] = {1,2,3,1,1,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFreq(arr,size);

    return 0;
}