#include <stdio.h>
#include <stdlib.h>

void main(){
	char str[1] = "";
	int int_arr[1] = {2};
	double doub_arr[1] = {1};
	printf("Address is: %p", &str[1]);
	printf("Address of next is: %p", &str[1] +1);
	printf("Address is: %p", &int_arr[1]);
	printf("Address of next is: %p", &int_arr[1] +1);
	printf("Address is: %p", &doub_arr[1]);
	printf("Address of next is: %p", &doub_arr[1]+1);
	}
