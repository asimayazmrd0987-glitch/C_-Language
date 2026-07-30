#include<stdio.h>
int sum(int c);
int main()
{
	int a=23;
	int *d=&a;
	int *s=NULL;
	printf("The adress of pointer is %u\n",&d);
	printf("The  value of a is %u\n",*d);
	printf("The adress of a is %d\n",d);
	printf("The null is %u\n",s);
	printf("the multiple of 23 is %d",sum(a));
	return 0;
}
int sum(int a){
	int s = a*a;
	printf("The sum is %d",s);
	return s;
}
