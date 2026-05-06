#include<stdio.h>
//#include<string.h>
int main(){

char str[6];
//scanf("%s",str); this is one way to do;
//printf("%s",str);
for(int i=0 ; i<5 ; i++){  // this is second way to do;
	scanf("%c",&str[i]);
	fflush(stdin);//this function avoid space to allocate space in memory
}
str[5]='\0';
printf("%s",str);
return 0;
}
