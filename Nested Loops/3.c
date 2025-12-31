#include<stdio.h>

int max(int a, int b);
int main(){
	int a ,b;
	printf("enter any two numbers :");
	scanf("%d%d",&a,&b);
	int s=max(a, b);
	printf("%d",max);
	
}
int max(int a,int b){
	if(a>b){
		printf("The number %d is greater",a);
	}
	else if(b>a){
		printf("The number %d is greater",b);
	}
}
