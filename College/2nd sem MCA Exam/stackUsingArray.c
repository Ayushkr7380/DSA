#include<stdio.h>
#define size 5

int arr[size];
int top = -1;
void push(int n){
    if( top == size - 1){
        printf("Stack overflow. \n");
        return;
    }

    top++;
    arr[top] = n;

    printf("\n%d is inserted in the stack successfully.\n",n);

}
void pop(){
    if(top == -1){
        printf("Stack underflow.\n");
        return;
    }

    printf("\n%d is removed from the stack successfully.\n",arr[top]);
    top--;

}
void peek(){
    printf("\n%d is the top element of the stack.\n",arr[top]);
}

void display(){
    printf(" --- Display --- \n");
    for(int i = top;i>=0;i--){
        printf("%d \t",arr[i]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    peek();

    display();

    pop();

    peek();

    display();

    
    return 0;
}
