#include<stdio.h> 
#include<stdlib.h> 
  
typedef struct Node 
{ 
    int data; 
    struct Node* next; 
}Node; 
    
int detectLoop(struct Node *list) 
{ 
    struct Node  *slow_p = list, *fast_p = list; 
  
    while (slow_p && fast_p && fast_p->next) 
    { 
        slow_p = slow_p->next; 
        fast_p  = fast_p->next->next; 
  
        /* If slow_p and fast_p meet at some point then there 
           is a loop */
        if (slow_p == fast_p) 
        { 
            printf("Loop Detected\n");
            return 1; 
        } 
    } 
  printf("Loop not detected\n");
    return 0; 
} 
  
struct Node *newNode(int key) 
{ 
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node)); 
    temp->data = key; 
    temp->next = NULL; 
    return temp; 
} 
  
int main() 
{ 
    struct Node *head = newNode(50); 
    head->next = newNode(20); 
    head->next->next = newNode(15); 
    head->next->next->next = newNode(4); 
    head->next->next->next->next = newNode(10); 
    head->next->next->next->next->next = head->next->next; 
  
    detectLoop(head); 

    return 0; 
} 