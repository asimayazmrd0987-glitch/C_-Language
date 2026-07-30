#include<stdio.h>
void sum(int *x){
	*x=6;
}
int main(){
	int a =4;
	sum(&a);
	printf("%d",a);
	return 0;
}
