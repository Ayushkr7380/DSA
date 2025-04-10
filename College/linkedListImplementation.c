#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int choice = 1;
    struct node *head,*newNode,*temp;

    head = 0;
    while(choice){

        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newNode->data);
        newNode->next = 0;
    
        if(head == 0){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }

        printf("Enter your choice : ");
        scanf("%d",&choice);
    }

    //Display
    temp = head;
    while(temp!=0){
        printf("%d \t",temp->data);
        temp = temp->next;
    }
    return 0;
}