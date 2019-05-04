#include<stdio.h>
#include<stdlib.h>

#define INC(x) ++x
#define DOUBLE(x) x*2

#define SWAP(a,b) do{a=a+b;b=a-b;a=a-b;} while(0)

int main(){
    int k=3,l=2;
    printf("%d\n",INC(k));
    printf("%d\n",DOUBLE(l));

    if(INC(k)<0 || DOUBLE (l)<0){
        SWAP(k,l);
    }
    printf("%d - %d\n",k,l);
}