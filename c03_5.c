#include <stdio.h>
#include <stdlib.h>


int main() {

  int *ptr = malloc(sizeof(int));

  printf("values in  memory ->\n");
  for(int i=0;i<4;i++){
    printf("%d\n",*(ptr+i));
  }

  memset(ptr,1,sizeof(int)*4);
  // -> sets 0001 0001 ...
  printf("\nafter memset->\n");
  for(int i=0;i<4;i++){
    printf("address = %p , value = %d \n",ptr+i,*(ptr+i));
  }

  free(ptr);
  return 0;
}
