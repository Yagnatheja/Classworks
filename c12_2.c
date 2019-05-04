#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 
  
struct Queue 
{ 
    int front, rear, size; 
    unsigned capacity; 
    int* array; 
}; 
  

struct Queue* createQueue(unsigned capacity) 
{ 
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue)); 
    queue->capacity = capacity; 
    queue->front = queue->size = 0;  
    queue->rear = capacity - 1;   
    queue->array = (int*) malloc(queue->capacity * sizeof(int)); 
    return queue; 
} 

void enqueue(struct Queue* queue, int item) 
{ 
    queue->rear = (queue->rear + 1)%queue->capacity; 
    queue->array[queue->rear] = item; 
    queue->size = queue->size + 1; 
    printf("%d enqueued to queue\n", item); 
} 
  

int dequeue(struct Queue* queue) 
{ 

    int item = queue->array[queue->front]; 
    queue->front = (queue->front + 1)%queue->capacity; 
    queue->size = queue->size - 1; 
    return item; 
} 
  
int peek(struct Queue* queue) 
{ 

    return queue->array[queue->front]; 
} 

  
int main() 
{ 
    struct Queue* my_queue = createQueue(1000); 
  
    enqueue(my_queue, 5); 
    enqueue(my_queue, 6); 
    enqueue(my_queue, 5); 
    printf("%d dequeued from queue\n\n", dequeue(my_queue)); 
    enqueue(my_queue, 4); 
    printf("Front item is %d\n", peek(my_queue));
    enqueue(my_queue, 3); 
    printf("%d dequeued from queue\n\n", dequeue(my_queue)); 
    printf("%d dequeued from queue\n\n", dequeue(my_queue)); 
  
    return 0; 
}