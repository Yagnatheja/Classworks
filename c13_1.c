#include<stdio.h>

int toZero(int num){
    if(num==0)
        return num;
    else
        {
            if(num>0)
                toZero(num-1);
            else
                toZero(num+1);
        }
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\nNumber converted to %d\n",toZero(num));
}