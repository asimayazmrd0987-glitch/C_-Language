#include<stdio.h>

int main(){
	int a[3]={1,2,3};
	int *b=a;
	printf("%d", *(b));
	printf("%d", *(b+1));
	printf("%d\n", *(b+2));
	int sum = *(b)+*(b+1)+*(b+2);
	printf("The sum is %d", sum);
	return 0;
}


