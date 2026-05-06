#include<stdio.h>
#include<string.h>

int main(){
	char str[]="Btjn!Bzb{";
	int i;
	for(i=0 ; i<strlen(str) ; i++){
		str[i]=str[i] - 1;//this minuses 1 from the each character in the sting and is decrypted
	}
	printf("%s",str);
	return 0;
}
