#include <stdio.h>
#include <stdlib.h>



void addDash(char * c){
  char * k;
  for(char *d = c; *(d+1)!='\0';d++){
    printf("%c-",*d);
    if(*(d+2)=='\0'){
      k=d+1;
    }

  }
      printf("%c\n",*k);

}

void reverse(int * x, int size){

  int * end;
  for(end = x+size-1;x < end ; x++,end--){
    int temp = *x;
    *x = *end;
    *end = temp;
  }
}

int main() {
  char x[]="Fall";
  addDash(x);
  int a[] ={1,2,3,4,5,6};
  int sizeOfArray = sizeof(a)/sizeof(int);
  for(int i=0;i<sizeOfArray;i++){
    printf("%d",a[i]);
  }
  printf("\n");
  reverse(a,sizeOfArray);
  for(int i=0;i<sizeOfArray;i++){
    printf("%d",a[i]);
  }
  printf("\n");
  return 0;
}
