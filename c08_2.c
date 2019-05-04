#include<stdio.h>
#include<stdlib.h>

int main(){
int i=0;
printf("(y/n)");
    while(i==0){
    char c;
    c=getchar();
    if(c=='y'){
    fprintf(stdout, "first\n");
    fprintf(stderr, "second\n");
    printf("(y/n)");
    }
    else if(c=='n'){
        break;
    }

    /* stderr prints first without \n. The reason being is that stdout is buffered in order to be more efficient, 
    whereas stderr doesn't buffer it's output and is more appropriate for error messages and things that need to be printed immediately.*/
    }

}