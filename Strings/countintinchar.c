#include<stdio.h>
#include<string.h>

int main(){
	int c,count=0,i;
	char str[]="I study in Uet Mardan buddy\n";
	for(i=0 ; i<strlen(str);i++){
	if(str[i]=='u'){
		count++;
	}
}
	printf("%d",count);
	return 0;
}
