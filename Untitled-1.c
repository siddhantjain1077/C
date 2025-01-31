#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

void print_data(struct node *head){
    if(head == NULL){
        printf("The linked list is empty");
    }
    
    struct node *ptr = head;

    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
};

void count_nodes(struct node *head){
    int count = 0;
    struct node *ptr = head;

    while(ptr!=NULL){
        count++;
        ptr = ptr -> link;
    }
    printf("%d",count);
};

struct node* addatend(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    ptr->link = temp;
    return temp;

};

struct node* addatbeg(struct node *head, int data){
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = NULL;

    ptr -> link = head;
    head = ptr;
    return head;
};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    
    struct node *current = malloc(sizeof(struct node));
    current -> data = 10;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 25;
    current -> link = NULL;

    head -> link -> link = current;

    struct node *ptr= current;
    ptr=addatend(ptr,98);
    ptr=addatend(ptr,90);
    head=addatbeg(head,3);
    
    ptr = head;


print_data(head);
// count_nodes(head);

};

