#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void print_data(struct node *head){
    struct node *ptr = head;
    if(head == NULL){
        printf("Linked list is empty");
    }
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}

struct node *addatbeg(struct node *head, int data){
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = NULL;

    ptr -> link = head;
    head = ptr;
    return head;
}

struct node *addatend (struct node *head, int data){
    struct node *ptr , *temp;
    ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = NULL;

    temp = head;
    while(temp -> link != NULL){
        temp = temp -> link;
    }
    temp -> link = ptr;
   
    return head;

}

void count_nodes(struct node *head){
    int count = 0;
    struct node *ptr = head;

    while(ptr != NULL){
        count++;
        ptr = ptr ->link;
    }
    printf("%d", count);
};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 90;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 89;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 88;
    current->link = NULL;

    head->link->link = current;

    print_data(head);
    count_nodes(head);
    head = addatbeg(head,87);
    head = addatend(head,86);
    print_data(head);
    
    return 0;
    
}