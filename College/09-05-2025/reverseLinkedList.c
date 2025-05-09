#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head,*newNode,*temp;

void create(){
    int choice=1;
    head = 0;
    while(choice){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newNode->data);

        newNode->next = 0;

        if(head == 0){
            temp = head =  newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }

        printf("Wanna add another node (0/1) : ");
        scanf("%d",&choice);
    }
}

void display(){
    temp = head;
    while(temp!=0){
        printf("%d \t",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reverseList(){
    temp = head;
    struct node *prev = 0,*next;
    while(temp!=0){
        next = temp->next;
        temp->next = prev;

        prev = temp;
        temp = next;
    }
    head = prev;
}
int main(){
    create();
    display();
    reverseList();
    display();
    return 0;
}