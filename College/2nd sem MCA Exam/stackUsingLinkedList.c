#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top = 0,*newNode;

void push(int n){
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;

    newNode->next = top;

    top = newNode;
}

void pop(){
    struct node *temp;

    temp = top;

    top = top->next;
}

void display(){
    struct node *temp;
    temp = top;
    while(temp != 0){
        printf("%d \t",temp->data);

        temp = temp->next;
    }
    printf("\n");
}
int main(){
    
    push(1);
    push(2);
    push(3);
    
    display();
    
    pop();
    
    display();
    return 0;
}