#include<stdio.h>
int printcost(int n);

int main(){
	printcost(4);
	return 0;
}
int printcost(int n){
	int n1=n+(n*0.88);
	printf("The value of %d is %d",n,n1);
	return n;
}

