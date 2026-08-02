#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value){
    struct Node *new = malloc(sizeof(struct Node));
    new->data=value;
    new->next=NULL;

    if(rear==NULL){
        front = rear = new;
    } else {
        rear->next = new;
        rear = new;
    }
    printf("Enqueue : %d\n",value);
}

void dequeue(){
    if(front==NULL){
        printf("Queue is empty!\n");
        return;
    }
    struct Node *temp=front;
    printf("Dequeue : %d\n",front->data);
    front=front->next;
    if (front==NULL) rear=NULL;
    free(temp);
    
}

void show(){
    struct Node *current=front;
    printf("Queue (front->rear) : ");
    while(current!=NULL){
        printf("%d",current->data);
        current=current->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    show();

    dequeue();
    show();

    dequeue();
    show();

    return 0;
    
}