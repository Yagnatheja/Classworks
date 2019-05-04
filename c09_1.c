#include<stdio.h>
#include<stdlib.h>

typedef struct data{
    int x;
    char *c;
    struct data *D;
}Data;

Data *newData(char *str){
    Data *d=(Data*)malloc(sizeof(Data));
    d->x=0;
    d->c=str;
    return d;
}

void deleteData(Data* d){
    free(d);
}

int main(){

char *str="string";
Data *d=(Data*)malloc(sizeof(Data));
d=newData(str);
deleteData(d);

}