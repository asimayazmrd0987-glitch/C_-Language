#include<stdio.h>

int main(){
	int age=20;
	int *ptr=&age;
	int **pptr=&ptr;
	
	printf("The age is %d\n",age);
	printf("The adress of age is %d\n",ptr);
	printf("The vakue at the adress of ptr is %d\n",*ptr);// *ptr has age adress and took it value at that adress(20)
	printf("The value at pptr and the its value is %d\n",**pptr);/* **pptr has the adress of ptr and ptr has adress of and , that tooks  that avalue */
	return 0;

}
