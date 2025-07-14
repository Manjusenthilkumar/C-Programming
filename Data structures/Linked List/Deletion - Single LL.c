
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} node;

int main() {
    int n, del;
    node *head = NULL, *tail = NULL, *newnode = NULL, *temp, *last;
    
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    
    printf("Enter the node to delete:");
    scanf("%d", &del);
    
    for(int i=1;i<=n;i++){
        newnode = malloc(sizeof(*newnode));
        if(newnode == NULL){
            printf("memory allocation failed");
            return 1;
        }
        
        printf("Enter the data %d:", i);
        scanf("%d", &newnode -> data);
        newnode -> next = NULL;
        
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
    }
        
        tail = head;
        while(tail != NULL){
            printf("%d ->", tail -> data);
            tail = tail -> next;
        }
     printf("NULL\n");  
     
     printf("After deletion:\n");
     if(del == 1){
          temp = head;
          if(head != NULL){
              head = head ->next;
              free(temp);
          }
     }
     else if(del == n){
         temp  = head;
         while(temp->next->next != NULL){
             temp = temp->next;
         }
         last = temp->next;
         free(last);
         temp->next = NULL;
     }
     else{
         temp = head;
         for(int i=1; i<del-1 && temp != NULL;i++){
             temp = temp->next;
         }
         last = temp->next;
         temp->next = last->next;
         free(last);
         
     }
    
     tail = head;
        while(tail != NULL){
            printf("%d ->", tail -> data);
            tail = tail -> next;
        }
        printf("NULL\n");
        
     


    return 0;
    
}