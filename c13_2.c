
#include<stdio.h>
#include<stdlib.h>
  
typedef struct Node { 
    int data; 
    struct Node *left, *right; 
}Node; 
  
int max(int a,int b,int c){
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else 
        return c;
}

int maxOfLeftElement(Node* root) 
{ 
    int res = 0; 
    if (root == NULL) 
        return res; 
  
    if (root->left != NULL) 
        res = root->left->data; 
  
    return max( maxOfLeftElement(root->left), 
                 res, 
                 maxOfLeftElement(root->right) ); 
} 
  
Node* newNode(int data) 
{ 
    Node* temp = (Node *)malloc(sizeof(Node));
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
int main() 
{ 
    Node* root = newNode(7); 
    root->left = newNode(6); 
    root->right = newNode(5); 
    root->left->left = newNode(4); 
    root->left->right = newNode(3); 
    root->right->left = newNode(2); 
    root->right->right = newNode(1); 
  
    /*     7 
         /    \ 
        6       5 
       / \     / \ 
      4  3     2  1          */
    printf("Left Max - %d\n",maxOfLeftElement(root)); 
    return 0; 
} 
