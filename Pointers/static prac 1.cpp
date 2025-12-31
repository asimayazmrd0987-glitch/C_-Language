#include<stdio.h>

int fun(int n);
int main(){
	static int i=1;
	int n;
	if(n>=5){
	return n;}
	n=n+1;
	i++;
	return n;
}
int fun(int i){
	return i;
}

