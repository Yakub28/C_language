#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}node;

node *top=NULL;

void push(){
    int n;
    printf("Enter integer to the stack: ");
    scanf("%i",&n);
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=n;
    temp->next=top;
    top=temp;
}
void pop(){
    if(top!=NULL){
        top=top->next;
    }
    else{
        printf("Impossible to pop out of the empty stack!");
    }
}
void show(){
    if(top==NULL)
    printf("Stack is empty:\n");
    else{
        node *current=top;
        while(current!=NULL){
            printf(" %d ", current->data);
            printf(" ");
            current=current->next;
        }
    }
}

int main()
{
    printf("\tThe stack\n");
    int option;
    while(option!=0){
    printf("Choose the action:\n");
    printf("0-exit the program.\n");
    printf("1-put the element on the top of the stack.\n");
    printf("2-remove the element from the stack\n");
    printf("3-print the stack:\n");
    scanf("%i", &option);
    switch(option){
        case 0:
        printf("Your stack is: ");
        show();
        printf("\nGoodbye");
        break;
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        show();
        break;
        default:
        printf("There is no such action available");
    }}
    return 0;
}
