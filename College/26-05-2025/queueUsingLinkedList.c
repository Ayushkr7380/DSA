#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *rear = 0;
struct node *front = 0;


void enqueue(int num){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = num;
    newNode->next = 0;

    if(front == 0 && rear == 0){
        rear = front = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }
}
void dequeue(){
    struct node *temp;
    if(front == 0){
        printf("Queue is empty.\n");
        return;
    }
    if(front == rear){
        front = rear = 0;
        printf("Queue is empty.\n");
    }
    temp = front;
    front = front->next;
    free(temp);
}
void display(){
    struct node *temp;
    temp = front;
    while(temp !=0){
        printf("%d \t",temp->data);
        temp = temp->next;
    }

}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    dequeue();
    // dequeue();
    // dequeue();
    // dequeue();
    // dequeue();

    display();

    return 0;
}