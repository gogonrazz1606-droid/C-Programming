#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    };

void addNode(struct Node **head, int value){
    struct  Node *new = malloc(sizeof(struct Node));
    new->data=value;
    new->next=NULL;

    if(*head==NULL){
        *head=new;
        return;
    }
    struct Node *current = *head;
    while(current->next !=NULL){
        current=current->next;
    }
    current->next=new;   
        
}

void view(struct Node *head){
    struct Node *current=head;
    while (current !=NULL){
        printf("%d ->",current->data);
        current=current->next;
    }
    printf("NULL\n");
}

int main (){

    struct Node *head=NULL;

    addNode(&head,10);
    addNode(&head,20);
    addNode(&head,30);
    addNode(&head,40);

    view(head);

    return 0;
    
}
