#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}Node;

Node *first,*second,*third,*fourth,*fifth,*sixth; 
void concatenate(Node *a,Node *b)
{

        if (a->next == NULL)
            a->next = b;
        else
            concatenate(a->next,b);
}
int main()
{
      
     first = (Node *) malloc( sizeof(Node) ); 
    second = (Node *) malloc( sizeof(Node) );
    third = (Node *) malloc( sizeof(Node) );
    fourth = (Node *) malloc( sizeof(Node) );
    fifth = (Node *) malloc( sizeof(Node) );
    sixth = (Node *) malloc( sizeof(Node) );
    first->data=1;
    first->next=third;

    second->data=2;
    second->next=fourth;

    third->data=3;
    third->next=fifth;

    fourth->data=4;
    fourth->next=sixth;

    fifth->data=5;
    fifth->next=NULL;

    sixth->data=6;
    sixth->next=NULL;

printf("First list:");
while(first!=NULL){
    printf("%d ",first->data);
    first=first->next;
}
printf("\n");
printf("Second list:");
while(second!=NULL){
    printf("%d ",second->data);
    second=second->next;
}
printf("\n");

concatenate(first,second);

}