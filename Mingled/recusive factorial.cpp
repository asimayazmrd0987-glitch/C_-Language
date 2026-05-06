#include<stdio.h>

int fact(int n);
int main(){
	printf("The factorial is %d",fact(4));
	return 0;
}
int fact(int n){
	if(n==0){
	return 1;
	}
	int factn=fact(n-1);
	int fact1=factn*n;
	return fact1;
}
