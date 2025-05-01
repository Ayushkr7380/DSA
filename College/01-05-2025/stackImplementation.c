#include<stdio.h>
int stack[4];
int top = -1;
void push(){
    int x;
    printf(" --- Enter data in stack ---\n");

    for(int i=0;i<=4;i++){
        printf("Enter data : ");
        scanf("%d",&x);

        if(top == 3){
            printf("Stack Overflow.\n");

        }
        else{
            top++;
            stack[top] = x;
        }
    }
}
void pop(){
    if(top == -1){
        printf("Stack Underflow.\n");
    }
    else{
        top--;
    }
}
void peek(){
    if(top == -1){
        printf("Stack Underflow.\n");
    }
    else{
        printf("Top element of the stack is %d.\n",stack[top]);
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d \t",stack[i]);
    }
}
int main(){
    push();
    pop();
    peek();
    display();
    return 0;
}