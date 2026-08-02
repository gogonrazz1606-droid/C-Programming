#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top =NULL;

void push(int value){
    struct Node *new = malloc(sizeof(struct Node));
    new->data = value;
    new->next = top;
    top = new;
    printf("Push : %d\n", value);
    }

void pop (){
    if (top==NULL) {
        printf("Stack is empty!\n");
        return;
    }
    struct Node *temp =top;
    printf("Pop : %d\n",top->data);
    top = top->next;
    free(temp);    
}

void show(){
    struct Node *current = top;
    printf("stack (top->bottom): ");
    while (current !=NULL){
        printf("%d",current->data);
        current = current->next;
    }
    printf("\n");
    }

    int main(){
        push(10);
        push(20);
        push(30);
        show();

        pop();
        show();

        pop();
        show();

        return 0;
    }
