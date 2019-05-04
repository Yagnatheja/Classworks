#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 
  
struct StackNode 
{ 
    int data; 
    struct StackNode* next; 
}; 
  
struct StackNode* newNode(int data) 
{ 
    struct StackNode* stackNode = (struct StackNode*) malloc(sizeof(struct StackNode)); 
    stackNode->data = data; 
    stackNode->next = NULL; 
    return stackNode; 
} 
  
  
void push(struct StackNode** root, int data) 
{ 
    struct StackNode* stackNode = newNode(data); 
    stackNode->next = *root; 
    *root = stackNode; 
    printf("%d pushed to stack\n", data); 
} 
  
int pop(struct StackNode** root) 
{ 
    struct StackNode* temp = *root; 
    *root = (*root)->next; 
    int popped = temp->data; 
    free(temp); 
  
    return popped; 
} 
  
int peek(struct StackNode* root) 
{ 
    return root->data; 
} 
  
int main() 
{ 
    struct StackNode* my_stack = NULL; 
  
    push(&my_stack, 5);
    push(&my_stack, 6); 
    push(&my_stack, 5); 
printf("%d popped from stack\n", pop(&my_stack)); 
    push(&my_stack, 4); 
    printf("Top element is %d\n", peek(my_stack)); 
    push(&my_stack, 3); 
printf("%d popped from stack\n", pop(&my_stack)); 
printf("%d popped from stack\n", pop(&my_stack));   
  
    return 0; 
}