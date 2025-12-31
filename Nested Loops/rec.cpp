#include<stdio.h>
void rec(int n){
	if(n==6) return;
	printf("The num is %d\n ",n);
    rec(n+1);
}
int main(){
	rec(1);
	return 0;
}

