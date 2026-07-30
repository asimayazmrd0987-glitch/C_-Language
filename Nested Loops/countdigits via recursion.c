#include <stdio.h>

int countdigits(int n);	

int main(){
	
	printf("%d",countdigits(12));
    
    
}
int countdigits(int n){
	if(n==0)
		return 0;
	
	else
		return 1+countdigits(n/10); 
	
}

