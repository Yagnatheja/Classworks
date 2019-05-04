#include<stdio.h>

typedef struct data{
    int data;
    char *c;
}Data;

typedef struct data1{
    int data;
    char c[5];
}Data1;

typedef struct data2{
    int data;
    char c[1];
}Data2;

typedef struct data3{
    int data;
    char c[1];
    double d;
}Data3;

typedef struct foo{
	int x;
	int y;
}foo;

typedef struct foo1{
	char * x;
	char * y;
}foo1;

typedef struct foo2{
	char x;
	double y;
}foo2;

typedef struct foo3{
	foo *x;
	int y;
}foo3;

int main(){
    printf("%lu\n",sizeof(Data));
    printf("%lu\n",sizeof(Data1));
    printf("%lu\n",sizeof(Data2));
    printf("%lu\n",sizeof(Data3));

    printf("foo - %lu\n", sizeof(foo));
    printf("foo1 - %lu\n", sizeof(foo1));
    printf("foo2 - %lu\n", sizeof(foo2));
    printf("foo3 - %lu\n", sizeof(foo3));
}

/*In order to align the data in memory,  one or more empty bytes (addresses) are inserted (or left empty)
 between memory addresses which are allocated for other structure members while memory allocation. 
 This concept is called structure padding.*/