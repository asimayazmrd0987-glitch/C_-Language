#include<stdio.h>
int prime(int a){
	if(a<2){
			return 0;
		}
		for(int i=2;i<a;i++){
			if(a%i==0)
			return 0;
		}
			return 1;
		}
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Prime numbers from 2 to %d are:\n", a);
	for(int i=2; i<=a; i++){
		if(prime(i)==1)
		printf("%d\n",i);
	}
	return 0;
}

