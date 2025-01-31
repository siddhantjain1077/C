#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void print_data(struct node *top){
    struct node *temp = top;
    while(temp != NULL){
        printf("%d", temp -> data);
        temp = temp -> link;
    }

};


struct node * push(int data, struct node *top){
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = top;
    // ptr -> link = top;
    
    return top;
};

int main(){
    // struct node *head = malloc(sizeof(struct node));
    // head -> data = 45;
    // head -> link = NULL;

    // struct node *current = malloc(sizeof(struct node));
    // current -> data = 10;
    // current -> link = NULL;
    // head -> link = current;

    // current = malloc(sizeof(struct node));
    // current -> data = 25;
    // current -> link = NULL;

    // head -> link -> link = current;
    struct node *top = malloc(sizeof(struct node));
    top -> data = 47;
    top -> link = NULL;

   top = push(90,top);
   top = push(40,top);
   print_data(top);
};
