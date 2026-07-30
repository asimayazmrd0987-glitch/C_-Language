#include<stdio.h>

int main(){
	int a=22;
	int *b=&a;
	
	printf("The variable value of a is %d\n",b);
	printf("The pointer adress is %d\n",&b);
	printf("The value of a is %d",*b);
	return 0;
	
}
