#include<stdio.h>
#include<string.h>

int main(){
	char st[]="UET Mardan";
	char str[]="UET Peshawar";
	strcpy(str, st);
	printf("I study in %s",str);
	return 0;
}


