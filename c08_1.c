#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char **argv){
    char *pass=argv[1];
    int choice;
    printf("Enter the number to shift the digits:");
    scanf("%d",&choice);
    for(int i=0;i<strlen(argv[1]);i++){
        argv[1][i]=argv[1][i]+choice;
    }
    printf("Passkey - %s\n",argv[1]);

}