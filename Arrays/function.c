#include<stdio.h>
int reduce(int a,int b);

int main(){
	int a,b;
	printf("Enter numerator and denominator:\n");
	scanf("%d %d",&a,&b);
	int d=reduce(a,b);
	printf("The reduced form is %d",a/d , b/d);
	return 0;
}
int reduce(int a, int b){
	int r;
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
