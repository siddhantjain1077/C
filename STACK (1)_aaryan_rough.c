#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * link;
};

void print_data(struct node * top){
    struct node * temp = top;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> link;
    }
    printf("\n");
}

struct node * push(struct node * top, int data){
    struct node * ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = top;
    top = ptr;
    return top;
}

struct node * pop(struct node * top){
    struct node * temp = top;
    top = top -> link;
    free(temp);
    temp = NULL;
    return top;
}

int main(){
    struct node * top = NULL;
    top = push(top, 89);
    top = push(top,100);
    print_data(top);
    top = pop(top);
    print_data(top);
}