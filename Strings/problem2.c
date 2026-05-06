#include<stdio.h>
#include<string.h>

int main(){
	char str[]="ASIM";
	int i=0,cou;
	char c=str[i];
	while(c!='\0'){
		c=str[i];
		i++;
	}
	cou=i-1;
	printf("%d",i);
return 0;	
} 
