#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Data{
    int value;
} Data;

typedef struct Vector{
    Data * data;
    int max_size;
    int current_size;
} Vector;
