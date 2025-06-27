#include<stdio.h>
int main(){
    int arr[] = {1,1,0,1,1,1,1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int countOne = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == 1){
            countOne++;
        }
        else if(arr[i] == 0){
            countOne = 0;
        }
    }
//display
    printf("Count : %d",countOne);
    return 0;
}
