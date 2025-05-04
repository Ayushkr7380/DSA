//Polynomial representation using linked list.
//WAP to find the addition of two polynomial using linked list.

//Let p1 = 5x+3 || p2 = 4x+8
#include<stdio.h>
#include<stdlib.h>

struct node {
    int cof;
    int ex;
    struct node *next;
};

struct node *head1,*temp1,*head2,*temp2;

struct node *create(int c,int e){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->cof = c;
    newNode->ex = e;
    newNode->next = 0;

    return newNode;
}

struct node *add(struct node *head1,struct node *head2){
    temp1 = head1;
    temp2 = head2;

    while(temp1 != 0 && temp2!= 0){
        temp1->cof = temp1->cof + temp2->cof;

        temp1 = temp1->next;
        temp2 = temp2->next;

    }
    return head1;
}

void display(struct node *head){
    struct node *t;
    t = head;
    while(t!=0){
        printf("%d \t",t->cof);

        t = t->next;
    }
}
int main(){

    struct node *head;

    head1 = create(5,1);
    head1->next = create(3,0);

    head2 = create(4,1);
    head2->next = create(8,0);

    head = add(head1,head2);

    display(head);

    return 0;
}