#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {1,2,3,4,5,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i,j;
    
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[i] == arr[j] && i!=j){
                break;
            }
        }
        if(j==size) printf("%d is unique element.\n",arr[i]);
    }

    return 0;
}