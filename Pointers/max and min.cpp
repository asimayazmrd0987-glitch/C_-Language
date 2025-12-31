#include<stdio.h>
void max(int *a, int *b);

int main(){
	int a=3;
	int b=5;
	printf("Number are %d and %d\n",a,b);
	max(&a , &b);    
	return 0;
}
void max(int *a, int *b){
    if(a == b){
	printf("%d is min\n",*a);}
	else{printf("%d is max\n",*b);
	}
}

