#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = 0,*newNode;

void push(int data){
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = top;

    top = newNode;
}
void display(){
    struct node *temp;
    temp = top;
    printf("\n -- Elements of STACK -- \n");
    while(temp !=0){
        printf("%d \t",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void pop(){
    struct node *temp;
    temp = top;
    top = top->next;
    printf("\nElement %d has been deleted.\n\n",temp->data);
    free(temp);
}
void peek(){
    printf("Top element of the stack is %d.\n",top->data);
}
int main(){
    push(3);
    push(5);
    push(51);
    push(15);
    push(25);
    display();
    pop();
    peek();
    display();

    return 0;
}