#include<stdio.h>
int sumarr(int *x ,int y);
int main(){
	int a[5]={1,2,3,4,5};
	printf("The m=sum is %d",sumarr(a,5));
	return 0;
}
int sumarr(int *x, int y){
	if(y==0)
	return 0;
	else{
		return *x+sumarr(x+1,y-1);
	}
}
