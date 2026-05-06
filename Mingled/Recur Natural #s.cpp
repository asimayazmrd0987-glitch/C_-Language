#include<stdio.h>
int sum(int n);
int main(){
	int a,n;
	printf("enter a number to get its double");
	scanf("%d",&n);
	printf("The value of %d is %d",n,sum(n));
}
int sum(int n){
	if(n!=0)
	return n+sum(n-1);
	else
	return n;
}
