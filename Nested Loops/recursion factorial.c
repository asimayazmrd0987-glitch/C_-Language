#include <stdio.h>

int fact(int n);	

int main(){
	
	printf("%d",fact(3));
    
    
}
int fact(int n){
	if(n==1)
		return 1;
	
	else
		return n*fact(n-1);
	
}

