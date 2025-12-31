#include<stdio.h>

int main(){
	int marks[5]; //={10,20,30};
	int *ptr=&marks[0];
	for(int i=0;i<10;i++){
	printf("%d index :",i);
	scanf("%d",(ptr+i));}
	
	for(int i=0;i<10;i++){
		printf("%u index = %d\n",i,marks[i]);
	}
	
	return 0;
 
}
 
