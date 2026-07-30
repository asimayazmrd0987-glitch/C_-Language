#include<stdio.h>

int main(){
	int marks[2][2];
	marks[0][0]=90;
	marks[0][1]=80;
	
	marks[1][0]=88;
	marks[1][1]=99;
	
	printf("%d\n",marks[0][0]);
	printf("%d\n",marks[0][1]);
	printf("%d\n",marks[1][0]);
	printf("%d\n",marks[1][1]);
	
	return 0;
}
