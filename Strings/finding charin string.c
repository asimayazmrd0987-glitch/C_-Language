#include<stdio.h>
#include<string.h>

int main(){
	char c='c';
	int present=0,i;
	char str[]="Asim";
	for(i=0 ; i<strlen(str);i++){
	if(str[i]== '\0'){
		present = 1;
		break;
	}
}
    if(present){
    	printf("Yes character is present");
	}
	else{
		printf("Not present");
	};
	return 0;
}
