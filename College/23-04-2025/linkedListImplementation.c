#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head,*temp,*newNode;
    int choice = 1;
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

        printf("----- Wanna add another node ???? -----\n");
        printf("Press 1 to add another node. \n");
        printf("Press 0 to exit. \n");
        scanf("%d",&choice);
    }
    return 0;
}