#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int num){
    if(rear == N - 1){
        printf("Queue overflow. Cannot insert %d.\n", num);
        return;
    }
    if(front == -1 && rear == -1){
        front = rear = 0;
    }
    else{
        rear++;
    }

    queue[rear] = num;
    printf("%d inserted in queue successfully.\n",num);
}
void dequeue(){
    if(front == -1 && rear == -1){
        printf("queue is empty.");
    }
    else if(front == rear){
        front = rear = -1;
        printf("All values are deleted.\n");
    }
    else{
        printf("%d is removed from the queue.\n",queue[front]);
        front++;
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d \t",queue[i]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
    return 0;
}
