#include<stdio.h>
int fact(int x);
int main(){
	int b=5;
	int resuit=fact(b);
	printf("%d",resuit);
}
int fact(int x){
	if(x==1)
	return 1;
	else
	return x*fact(x-1);
}

