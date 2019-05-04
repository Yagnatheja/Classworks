#include <stdio.h>
#include <stdlib.h>

void foo(int a, int b){
	a=7;
	*b = a;
	b =&a;
	*b=4;
	printf("%d %d \n",a,*b);
	}
	
	void swap(int *p1, int *p2){
		int temp = *p2;
		*p2 = *p1;
		*p1 = temp;
		}
	int main(){
		int m=3,n=5;
		foo(m,&n);
		printf("%d,%d \n",m,n);
		
		int a=10,b=3;
		printf("before swap -> \n");
		prnitf("a=%d, b=%d \n",a,b);
		swap(&a,&b);
		printf("after swap -> \n");
		prnitf("a=%d, b=%d \n",a,b);
		return 0;
		
		}
