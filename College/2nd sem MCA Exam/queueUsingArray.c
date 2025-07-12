#include<stdio.h>
#define size 5

int queue[size];

int front  = -1;
int rear = -1;
void enqueue(int n){

    if(rear == size -1){
        printf("\n Queue is full.\n");
        return;
    }
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;

        queue[rear] = n;

    }
    
    else{
        rear++;
        queue[rear] = n;
    }

    printf("\n %d is added in the queue.",n);
}
void dequeue(){
    if(front == -1){
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nDeleted element: %d\n", queue[front]);

    if(front == rear){
        front = -1;
        rear = -1;
    }else{

        front++;
    }
}

void display(){
    printf(" \n -- DISPLAY -- \n");
    for(int i=front;i<= rear ;i++){
        printf("%d \t",queue[i]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();

    display();


    return 0;
}