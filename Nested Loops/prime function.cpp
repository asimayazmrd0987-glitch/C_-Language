#include<stdio.h>
int isprime(int a);

int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	int result=isprime(a);
	if(result)
	printf("The number is prime ");
	else{
		printf("The number is not prime");
	}
}
int isprime(int a){
	if(a<=1) return 0;
	if(a==2) return 1; 
	int i;
	for(i=2;i<=a-1;i++){
		if(a%i==0){
		return 0;}
	}return 1;
	}

