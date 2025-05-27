//Brute force approch
#include<bits/stdc++.h>
void findTargetCount(int arr[],int target,int size){
    int count = 0;
    for(int i=0;i<size;i++){
        int sum = 0;
        for(int j=i;j<size;j++){
            sum +=arr[j];
            if(target == sum){
                count++;
            }
        }
    }

    printf("Total number of sum of subarray whose sum is %d is %d",target,count);
}

int main(){
    int arr[] = {1,2,3,1,1,2,1,3};
    int target = 5;
    int size = sizeof(arr)/sizeof(arr[0]);

    findTargetCount(arr,target,size);

    return 0;
}