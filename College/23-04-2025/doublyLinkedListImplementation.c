#include<stdio.h>
#include<stdlib.h>

//Declare node globally

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

//Declare head pointer to store address of 1st node.
//Declare temp pointer to traversal.
//Declare newNode pointer to create store address of newnode each time.
struct node *head,*temp,*newNode;

//Function to create doubly linked list.
void createDoublyLinkedList(){
    int choice = 1;
    head = 0;
    while(choice){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newNode->data);

        newNode->prev = 0;
        newNode->next = 0;

        if(head == 0){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }

        printf("\n -- Want to add another node. -- \n");
        printf("\n --Press 1 to add another node. --\n");
        printf("\n -- Press 0 to exit. --\n");
        scanf("%d",&choice);
    }
}

//Function to display all nodes.
void display(){
    printf("\n -- Elements of Doubly linked list --\n");
    temp = head;
    while(temp!= 0){
        printf("%d \t",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//Function to insert node at the begin.
void insertAtBeg(){
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newNode->data);

    newNode->prev = 0;
    newNode->next = 0;


    if(head == 0){
        head = temp = newNode;
        
    }
    else{
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }

    printf("\n %d is inserted at the begin.\n",newNode->data);
}

//Function to insert node at end.
void insertAtEnd(){
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newNode->data);

    newNode->prev = 0;
    newNode->next = 0;

    temp = head;
    if(head == 0){
        head = temp = newNode;
    }
    else{
        while(temp->next !=0){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }
    printf("\n %d is inserted at the end.\n",newNode->data);
}

//Function to insert node at any position.
void insertAtPos(){
    int i=1,pos;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter position : ");
    scanf("%d",&pos);

    printf("Enter data : ");
    scanf("%d",&newNode->data);

    newNode->prev = 0;
    newNode->next = 0;

    temp = head;
    if(head == 0 && pos == 1){
        head = temp = newNode;
        printf("\n-- Element inserted at position 1 successfully --\n");
    }
    else if(pos == 1){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        printf("\n -- Element inserted at position 1 successfully -- \n");
        return;
    }
    else{
        temp = head;
        while(i < pos - 1 && temp!= 0){
            temp = temp->next;
            i++;
        }

        if(temp == 0){
            printf("Position out of range.\n");
            free(newNode);
        }
        else {
            newNode->next = temp->next;
            newNode->prev = temp;

            if (temp->next != NULL) {
                temp->next->prev = newNode;
            }

            temp->next = newNode;
            printf("\n-- Element inserted at position %d successfully --\n", pos);
        }
    }
}

//Function to delete node at begin.
void deleteAtBeg(){
    if(head == NULL){
        printf("Node is empty.\n");
    }
    else{
        temp = head;
        head = head->next;
            
        if(head != 0){
            head->prev = 0;
            printf("Deleted element: %d\n", temp->data);
            free(temp);
        }
    }
}

//Function to delete node at end.
void deleteAtEnd(){
    if(head == NULL){
        printf("Node is empty.\n");
    }
    else{
        temp = head;
        if(head->next == 0){
            printf("Deleted element is %d \n",head->data);
            free(head);
            head = 0;
        }
        else{
            while(temp->next !=0){
                temp = temp->next;
            }
            printf("Deleted element: %d\n", temp->data);
            temp->prev->next = 0;
            free(temp);
        }
    }
}

//Function to delete node at any position.
void deleteAtPos() {
    int pos, i = 1;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    // Delete from beginning
    if (pos == 1) {
        temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }

        printf("Deleted element: %d\n", temp->data);
        free(temp);
        return;
    }

    // Traverse to the position
    temp = head;
    while (i < pos && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    printf("Deleted element: %d\n", temp->data);
    free(temp);
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
                createDoublyLinkedList();
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
                deleteAtBeg();
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