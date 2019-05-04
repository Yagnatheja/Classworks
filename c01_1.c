#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[]={1,2,3,4,5};
    char s[]={'s','t','r','i','n','g','\0'};
    printf("The size of int is %lu\n",sizeof(int));
    printf("The size of array is %lu\n",sizeof(a));
    printf("The length of int array is %lu\n",sizeof(a)/sizeof(int));
    printf("The last number of int array is %d\n",a[sizeof(a)/sizeof(int)-1]);
    printf("The size of string is %lu\n",sizeof(s));
    printf("The length of char array is %lu\n",sizeof(s)/sizeof(char));
    printf("The contents of 1 byte of memory after string is %c\n",s[sizeof(s)/sizeof(char)-1]);
}