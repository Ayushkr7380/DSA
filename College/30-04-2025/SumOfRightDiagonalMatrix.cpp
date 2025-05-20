#include<stdio.h>

int main(){
    //Array of 3x3 size
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //Declare and initialize sum = 0
    int sum = 0;
    

    for(int i=0;i<3;i++){
        for(int j=2-i;j>=0;j--){
            sum += arr[i][j];
        }
        
    }
    
    printf("Sum of right diagonal element of 3x3 matrix is %d\n",sum);

    return 0;
}
