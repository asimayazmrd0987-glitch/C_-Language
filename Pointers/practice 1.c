#include<stdio.h>

int main(){
	int v=3;
	int *p=&v;
	printf("The %d is %d",v,*p);//pass by reference
	return 0;
}

