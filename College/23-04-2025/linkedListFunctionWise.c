#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head,*temp,*newNode;
void addNodeNormally(){
    int ch = 1;
    head = 0;
    while(ch == 1){
        newNode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data : ");
        scanf("%d",&newNode->data);

        newNode->next = 0;

        if(head == 0){
            temp = head = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }

        printf("Press 1 to add another node.\n");
        printf("Press 0 to exit.\n");
        scanf("%d",&ch);
    }
}

void display(){
    //Display

    temp = head;
    while(temp!=0){
        printf("%d \t",temp->data);
        printf("\n");
        temp = temp->next;
    }


}
void insertAtBeg(){
    printf("\n --- Insert At Beginning --- \n");

    newNode = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter data : ");
    scanf("%d",&newNode->data);
    
    newNode->next = head;
    head = newNode;

    printf("\n -- Element inserted at the beginning successfully -- \n");
}
void insertAtEnd(){
    printf("\n --- Insert At End --- \n");

    newNode = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter data : ");
    scanf("%d",&newNode->data);
    
    newNode->next = 0;
    temp = head;

    while(temp->next != 0){
        temp = temp->next;
    }

    temp->next = newNode;

    printf("\n -- Element inserted at the end successfully -- \n");
}
void insertAtPos(){
    int i = 1,pos;
    printf("\n --- Insert At Any Position --- \n");

    newNode = (struct node*)malloc(sizeof(struct node));
    temp = head;

    printf("Enter position : ");
    scanf("%d",&pos);

    printf("Enter data : ");
    scanf("%d",&newNode->data);
    
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        printf("\n -- Element inserted at position 1 successfully -- \n");
        return;
    }

    while (i < pos - 1 && temp != 0) {
        temp = temp->next;
        i++;
    }

    if (temp == 0) {
        printf("\n Invalid position. \n");
        free(newNode); 
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("\n -- Element inserted at position %d successfully -- \n", pos);
    }
}
void deletionAtBeg(){
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
    } else {
        temp = head;
        head = head->next;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
    }
}
void deleteAtEnd(){
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    // If only one node is in the list
    if (head->next == NULL) {
        printf("Deleted element: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    temp = head;
    struct node *secondLast;

    while (temp->next != NULL) {
        secondLast = temp;
        temp = temp->next;
    }

    secondLast->next = NULL;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

void deleteAtPos() {
    int pos, i = 1;
    struct node *ptr;

    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    // Deletion at first position
    if (pos == 1) {
        ptr = head;
        head = head->next;
        printf("Deleted element: %d\n", ptr->data);
        free(ptr);
        return;
    }

    temp = head;
    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position.\n");
    } else {
        ptr = temp->next;
        temp->next = ptr->next;
        printf("Deleted element: %d\n", ptr->data);
        free(ptr);
    }
}

int main(){
    int choice;
    int i=1;

    while(i == 1){
        printf("\n -- Press 1 to create linked list. -- \n");
        printf("\n -- Press 2 to display linked list. -- \n");
        printf("\n -- Press 3 to insert element at begin. -- \n");
        printf("\n -- Press 4 to insert element at end. -- \n");
        printf("\n -- Press 5 to insert element at any position. -- \n");
        printf("\n -- Press 6 to delete element at begin. -- \n");
        printf("\n -- Press 7 to delete element at end. -- \n");
        printf("\n -- Press 8 to delete element at any position. -- \n");
        printf("\n -- Press 0 to exit. -- \n");
        printf("\n Enter Your choice : ");
        scanf("%d",&choice);


        switch (choice)
        {
            case 0:
                i = 0;
                break;
            case 1:
                addNodeNormally();
                break;
            case 2:
                display();
                break;
            case 3:
                insertAtBeg();
                break;
            case 4:
                insertAtEnd();
                break;
            case 5:
                insertAtPos();
                break;
            case 6:
                deletionAtBeg();
                break;
            case 7:
                deleteAtEnd();
                break;
            case 8:
                deleteAtPos();
                break;
            
            default:
                break;
        }
    }
    return 0;
}