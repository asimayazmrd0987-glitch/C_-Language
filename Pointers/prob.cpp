#include<stdio.h>

int main(){
	int *ptr;
	int x;
	ptr = &x;
	*ptr=0;
	
	printf("%d\n",x);
	printf("%d\n",*ptr);
	*ptr+=5;
	printf("x = %d\n",x);
	printf("value  of x is %d\n",*ptr);
	
	(*ptr)++;
	printf("%d\n",x);
	printf("%d\n",*ptr);
	
	
    return 0;
}

