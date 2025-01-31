#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
}*top = NULL;


void print_data(){
    struct node *temp = top;
    while(temp){
        printf("%d", temp -> data);
        temp = temp -> link;
    }       

}

int pop(){
    struct node *temp;
    temp = top;
    int val = temp -> data;
    top = top -> link;
    free(temp);
    temp = NULL;
    
}

void push_data(int data){   
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode -> data = data;
    newnode -> link = NULL;
    newnode -> link = top;
    top = newnode;
}

int main(){
    // struct node *head = malloc(sizeof(struct node));
    // head -> data = 90;
    // head -> link = NULL;
    push_data(89);
    push_data(90);
    print_data();
    return 0;
}