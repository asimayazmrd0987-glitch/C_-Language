#include<stdio.h>
#include<string.h>

int main(){
	char str[20];//="Asim Ayaz";
	printf("Enter string do you want to encrypt: ");
    fgets(str, sizeof(str), stdin);
	int i;
	for(i=0 ; i<strlen(str) ; i++){
		str[i]=str[i]+1;//here 1 ascii value is added to each character in the string and become encrypted 
	}
	printf("%s",str);
	return 0;
}
