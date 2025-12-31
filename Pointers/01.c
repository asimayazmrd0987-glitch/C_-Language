#include<stdio.h>

int main(){
	int i=5;
	int *p=&i;
	int **pt=&p;
	printf("The num is %d and %d",*p,**pt);
	return 0;
}
