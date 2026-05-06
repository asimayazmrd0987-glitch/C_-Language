#include<stdio.h>

int sum(int a,int b);//declaration

int main()
{
	int a,b;
	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);
	
	int s = sum(a,b);//body
	printf("The number is : %d", s);
	return 0;
}
int sum(int x,int y)//definition
{ 
return x/y;}	//Division

