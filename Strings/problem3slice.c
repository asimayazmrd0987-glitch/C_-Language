#include<stdio.h>
//#include<string.h>
char* slice(char str[],int m , int n){
	int i=0;int count;
	char *ptr1=&str[m];
	char *ptr2=&str[n];
	 str=ptr1;
	 str[n]='\0';
	 return str;	
}

int main(){
 char str[]= "Asim Ayaz";
  char str1[]= "Hello World";
	printf("%s\n",slice(str,0,6));
	printf("%s",slice(str1,0,6));
return 0;	
} 

