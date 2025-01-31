#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *push (struct node *top, int data){
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = top;
    top = ptr;
    return top;
};

void print_data(struct node *top){
    struct node *temp = top;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> link;
    }
    printf("\n");
};

int main(){
    struct node *top = NULL;
    // struct node *head = malloc(sizeof(struct node));
    // head -> data = 90;
    // head -> link = NULL;

    top = push(top,100);
    print_data(top);
}