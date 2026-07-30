#include<stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=*a;
	*b=temp;
	
}
int main(){
	int a,b;
	printf("Please enter any number: ");
	scanf("%d",&a);
	printf("Please enter another number: ");
	scanf("%d",&b);
	
	printf("Before swap a=%d , b=%d\n",a,b);
	swap(&a,&b);
	printf("After swap a = %d , b = %d\n",a,b);
	return 0;
}

