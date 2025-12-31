#include<stdio.h>

int main (){
	int c[44]={11,22,44,33,33,22,33};
	int n= sizeof(c)/sizeof(c[0]);
	printf("%d",n);
}
