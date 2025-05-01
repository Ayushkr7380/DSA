#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head,*temp,*newNode;
void implementLinkedList(){
    head = 0;
    int choice = 1;
    while(choice){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&newNode->data);
            
        newNode->next = 0;

        if(head == 0){
            temp = head = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        
        printf("-- Press 1 to add another node -- \n");
        printf("-- Press 0 to add another node -- \n");
        printf("Choice : ");
        scanf("%d",&choice);
    }
}
void display(){
    temp = head;
    while(temp != NULL){
        printf("%d \t",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void insertionAtBeg(){
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newNode->data);      
    newNode->next = head;

    head = newNode;
}
void deletionAtBeg(){
    temp = head;
    while(temp != 0){
        head = temp->next;
        free(temp);
    }
}
void deletionAtSomePos(){

    struct node *ptr;
    temp = head;
    int pos,i=1;
    printf("Enter position : ");
    scanf("%d",&pos);

    while( i <pos - 1){
        temp = temp->next;
        i++;
    }

    ptr = temp->next;
    temp->next = ptr->next;
    free(ptr);
}
int main(){

    implementLinkedList();
    display();
    return 0;
}