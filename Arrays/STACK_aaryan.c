#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * link;
};

void print_stack(struct node * top){
    struct node * temp = top;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> link;
    }
    printf("\n");
}

struct node * push(int data, struct node * top){
    struct node * ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = NULL;
    ptr -> link = top;
    top = ptr;
    return top;
}

struct node * pop(struct node * top){
    struct node * temp = top;
    top = top -> link;
    int val = temp -> data;
    free(temp);
    temp = NULL;
    return top;
}

int main(){
    int data1, data2, data3, val;

    printf("Enter the first value of the stack : ");
    scanf("%d", & data1);
    printf("Enter the second value of the stack : ");
    scanf("%d", & data2);
    printf("Enter the third value of the stack : ");
    scanf("%d", & data3);   

    struct node * top = malloc(sizeof(struct node));
    top -> data = data1;
    top -> link = NULL;
    top = push(data2, top);
    top = push(data3, top);
    print_stack(top);
    top = pop(top);
    print_stack(top);
}