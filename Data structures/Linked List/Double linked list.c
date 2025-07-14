
#include <stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
} Node;


int main() {
    int n;
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    Node *head = NULL,*tail = NULL, *newnode = NULL;
    
    for(int i=1;i<=n;i++){
        newnode = malloc(sizeof(Node));
        if (newnode == NULL){
            printf("Memory allocation failed\n");
            return 1;
        }
        printf("Enter the data for node %d: ", i);
        scanf("%d", &newnode -> data);
        newnode -> next = NULL;
        newnode -> prev = tail;
        
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    
    Node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
    
    while(tail && tail->next != NULL){
        tail = tail->next;
    }
    
    
    printf("Backward\n");
    while(tail != NULL){
        printf("%d <-", tail->data);
        tail = tail -> prev;
    }
    
    printf("NULL\n");
    
    

    return 0;
}