#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "c10_2.h"

Vector * initialize_vector(){
    Vector *v= malloc(sizeof(Vector));
    v->data=NULL;
    v->max_size=0;
    v->current_size=0;
    return v;
}

int main(){
    Vector *vect = initialize_vector();
}