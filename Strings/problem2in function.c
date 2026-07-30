#include<stdio.h>
//#include<string.h>
int strlen(char str[]){
		//char str[]="ASIM";
	int i=0,cou;
	char c = str[i];
	while(c!='\0'){
		c=str[i];
		i++;
	}
	cou=i-1;
	return cou;
}

int main(){
 char str[]= "Asim  ";
	printf("%d",strlen(str));
return 0;	
} 

