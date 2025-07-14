#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
} node;

int main() {
    int n, val, pos;
    node *head = NULL, *tail = NULL, *newnode = NULL, *temp;
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    
    
    for(int i=1;i<=n;i++){
        newnode = malloc(sizeof(node));
        printf("Enter the value of the node %d:", i);
        scanf("%d", &newnode -> data);
        newnode->next = NULL;
        newnode->prev = tail;
        
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    
    printf("Forward\n");
    
    temp = head;
    while(temp != NULL){
        printf("%d ->", temp -> data);
        temp = temp->next;
    }
    printf("NULL\n");
    
    printf("Backward\n");
    
    temp = tail;
    while(temp != NULL){
        printf("%d ->", temp->data );
        temp = temp->prev;
    }
    printf("NULL\n");
    
    printf("Enter the position to insert:");
    scanf("%d", &pos);
    printf("Enter the number to insert:");
    scanf("%d", &val);
    
    if(pos > n){
        newnode = malloc(sizeof(node));
        tail->next = newnode;
        newnode->data = val;
        newnode->next = NULL;
        newnode->prev = tail;
        tail = newnode;
    }
    else if(pos == 1){
        newnode = malloc(sizeof(node));
        newnode->next = head;
        newnode->prev = NULL;
        head->prev = newnode;
        head = newnode;
        newnode->data = val;
    }
    else{
         newnode = malloc(sizeof(node));
    newnode->data = val;

    temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    newnode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newnode;

    temp->next = newnode;
    }
    
    temp = head;
    while(temp != NULL){
        printf("%d ->", temp -> data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}